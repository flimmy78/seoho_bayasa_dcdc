#define _FAULT_

#include "main_def.h"
#include "math.h" 

int fault_chk()
{
	int TripCode;
	TripCode = 0;

	if ( ( TripCode = CheckOverCurrent()	) != 0) return TripCode	;
	if ( ( TripCode = CheckFaultDriver()	) != 0) return TripCode	;

	switch(epwm_isr_num)
	{
		case 1:	{	
					if ( ( TripCode = CheckOverVolt() 		) != 0) return TripCode	;
					if(UV_Check_Enable)
					{
						if ( ( TripCode = CheckUnderVolt()	) != 0) return TripCode;
					}
					epwm_isr_num = 0;
				} break;
		case 2: {
					if ( ( TripCode = CheckOverVolt_in() 	) != 0) return TripCode	;
					if ( ( TripCode = CheckUnderVolt_in()	) != 0) return TripCode	;
					epwm_isr_num = 0;
				} break;
		case 3:	{	
					if ( ( TripCode = CheckOverHeat()		) != 0) return TripCode	;
					epwm_isr_num = 0;
				} break;
	}
	return TripCode;
}
/*
	F1 Over_Load
	F2 Device_short
	F3 Over_Current
	F4 Over_Voltage
	F5 Under_Voltage
	F6 Over_Speed
	F7 Over_Temp
	F8 DB_Fault
	F9 Zero_Sequence_Current
	F10 Ext_Fault_A
	F11 Ext_Fault_B
	F12 Hardware_Fault
	F13 Over_Current_A
	F14 Over_Current_B
	F15 Over_Current_C
	F16 Init_Charge
	F17 Speed_Detection
*/

int CheckOverCurrent( )
{
// Current Limit
// Irate는 입력 전격 전류이며 (Prate/Vrate) Vrate rated input voltage이다 
// 각 상의 입력 전격 전류는 Irate/N_SW 이다.

	if(first > 20)
	{
		first = 21;
	// 각 상의 OC_Trip 확인
	switch(epwm_isr_num)
	{
		case 1: if (Ias > I_rate_p * (float)(OC_Trip/100))
				{
					point.Fault1.bit.OC_A = 1;
					epwm_isr_num = 0;
					return ERR_OVER_CURRENT_U_PHASE;
				}	break;
		case 2: if (Ibs > I_rate_p * (float)(OC_Trip/100))
				{
					point.Fault2.bit.OC_B = 1;
					epwm_isr_num = 0;
					return ERR_OVER_CURRENT_V_PHASE;
				}	break;
		case 3:	if (Ics > I_rate_p * (float)(OC_Trip/100))
				{
					point.Fault2.bit.OC_C = 1;
					epwm_isr_num = 0;
					return ERR_OVER_CURRENT_W_PHASE;
				}	break;
		}

		if (Iinput > I_rate * (float)(OC_Trip/100))			// 220%
		{
			point.Fault1.bit.Over_Current = 1;				// OC_MAG
			return TRIP_OVER_CURRENT;
		}

	// Over_Load 확인
		if (Iinput > (0.01* (float)I_rate * (float)Over_Load))  //135%
		{
			if (OL_TimeOver_Count > Over_Load_Time)	// Over Load time
			{
				OL_TimeOver_Count = (float)(Over_Load_Time+1);
				point.Fault1.bit.Over_Load = 1;
				return TRIP_OVER_LOAD_TIME;
			} 
			else OL_TimeOver_Count += Tsamp/3.;
		}
		else
		{
			if(OL_TimeOver_Count>0) OL_TimeOver_Count-=Tsamp/3.;
			else 					OL_TimeOver_Count = 0;
		}

	// 연속 부하 확인
		if (Iinput > (0.01*(float)I_rate * (float)Max_Con_cur))
		{
			if (MaxCon_Curr_Count > 120)	// 120 seconds
			{
				MaxCon_Curr_Count = 120. + 1.;
				point.Fault1.bit.Over_Load = 1;
				return TRIP_OVER_LOAD_TIME;
			} 
			else MaxCon_Curr_Count+=Tsamp/3.; //95%			(float)(Max_Con_cur/100)
		}
		else 
		{
			if(MaxCon_Curr_Count>0) MaxCon_Curr_Count-=Tsamp/3.;
		}
	}
	else first ++; 
	return 0;
}

int CheckOverVolt()
{
//	OV_Trip 값을 무시 하여 기본 허용 Drive 전압의 기본허용 level을 사용했다.
// 	2010_09_01  dbsgln
//	if(Vdc_out > OV_Trip) OverVoltCount++;//||(GpioDataRegs.GPADAT.bit.GPIO15==0)) OverVoltCount++;
	if(Vdc_out > OV_set)
	{
		if (OverVoltCount > OV_Time)
		{
			OverVoltCount = (float)(OV_Time + 1);
			if(!point.Fault_Neglect1.bit.Over_Bus_Volt)
			{
				point.Fault1.bit.Over_Bus_Volt= 1;
				Fault_Check = CODE_OVER_VOLTAGE_LEVEL;
				return  CODE_OVER_VOLTAGE_LEVEL;
			}
			Fault_Check = CODE_OVER_VOLTAGE_LEVEL;
		}
		else OverVoltCount+= Tsamp;
	}
	else
	{
		if( OverVoltCount > 0) 	OverVoltCount -= Tsamp;
		else					OverVoltCount = 0;
	}
	return 0;
}

int CheckUnderVolt( )
{
//	if (Vdc_out < UV_Trip)		UnderVoltCount++;
//	OV_Trip 값을 무시 하여 기본 허용 Drive 전압의 기본허용 level을 사용했다.
// 	2010_09_01  dbsgln 
	if (Vdc_out < UV_set)
	{
		if (UnderVoltCount > OV_Time)
		{
			UnderVoltCount = (float)(OV_Time+1);
			if(!point.Fault_Neglect1.bit.Low_Bus_Volt)
			{
				point.Fault1.bit.Low_Bus_Volt = 1;
				Fault_Check = TRIP_UNDER_VOLT;
				return  TRIP_UNDER_VOLT;
			}
			Fault_Check = TRIP_UNDER_VOLT;
		}
		else UnderVoltCount+= Tsamp;
	}
	else
	{
		if( UnderVoltCount > 0) UnderVoltCount-= Tsamp;
		else					UnderVoltCount=0;
	}

	return 0;
}

int CheckOverVolt_in()
{
	if(Vdc_input > OVin_set)
	{
		if (OverVoltinCount > OV_Time)
		{
			OverVoltinCount = (float)(OV_Time+1);
			point.Fault2.bit.OV_IN = 1;
			return  ERR_OVER_VOLTAGE_IN;
		}
		else OverVoltinCount+=Tsamp;
	}
	else
	{
		if( OverVoltinCount > 0) OverVoltinCount -= Tsamp;
		else					 OverVoltinCount =0;
	}
	return 0;
}

int CheckUnderVolt_in( )
{
	if (Vdc_input < UVin_set)
	{
		if (UnderVoltinCount > OV_Time )
		{
			if(!point.Fault_Neglect2.bit.UV_IN)
			{
				point.Fault2.bit.UV_IN = 1;
				return ERR_UNDER_VOLTAGE_IN;
			}
			Fault_Check = ERR_UNDER_VOLTAGE_IN;
			UnderVoltinCount = (float)(OV_Time+1);
		}
		else UnderVoltinCount+=Tsamp;
	}
	else
	{
		if( UnderVoltinCount > 0) UnderVoltinCount-= Tsamp;
		else					  UnderVoltinCount = 0;
	}
	return 0;
}

int CheckOverHeat( )
{
	if (Temperature >= OV_Temp)
	{
		if( OverHeatCount > 2 )
		{
			OverHeatCount = 3;
			point.Fault2.bit.Over_Temp = 1;
			return ERR_OVER_HEAT;
		}
		else OverHeatCount+=Tsamp;
	}
	else
	{
		if( OverHeatCount > 0) OverHeatCount=Tsamp;
		else				   OverHeatCount=0;
	}
	return 0;
}

int CheckFaultDriver( )
{
	if (GpioDataRegs.GPADAT.bit.GPIO12==0)
	{
		point.Fault2.bit.Device_Short = 1;
		return FAULT_DRIVER;
	}
	return 0;
}

void TripProc( )
{
//	gMachineState = STATE_TRIP;
//	nDC_CONTACT_SET;			// Main Charge Relay Off
	Machine_state = 0;
	flag.GT1_ENA = 0;			// PWM 차단
	nBOOT_MODE_SET;				// PWM 차단
	nPWM_ENABLE_SET;
	flag.control = 0;			// 제어 전지
	DO_Func.bit.FAULT_OUT_A = 1;
	DO_Func.bit.FAULT_OUT_B = 1;

	State_Index = STATE_FAULT;
	Machine_state = STOP;
	Run_Stop_Status = 0;
	Run_Stop = 0;
	
	FAULT_RESET_COMPLETE = 0;
	DO_Func.bit.DRIVE_READY=0;
	
	if(Fault_State == 0)
	{
		FAULT_RESET_COMPLETE= 0;
		Fault_count++;
		Word_Write_data(2379, Fault_count);
		// Fault 횟수를 EEPROM에 저장 해야 한다.
		Fault_State = 1;
	}
//	Fault_Recording(Fault_count);
}

void Fault_Recording( int Fault_cnt )
{
	int n;
	int Data_number = 10;
	int rec_data[10];
	int rec_num;
	int Rec_Length = 100;
	int Rec_Start_Addr = 2500;
	int before_data;

 // Fault 횟수 가 Fault Record 힛수를 넘을 경우 1번제 Record를 삭제 하고 저장 된 값들을 이동 시켜 저장 한다.
	if(Fault_cnt>Rec_Length)
	{
		for(rec_num=Rec_Length+1;rec_num<1;rec_num--)
		{
			for(n=0;n>Data_number;n++)
			{
				Word_Read_data(Rec_Start_Addr+(rec_num-1)*Data_number-n,&before_data);
				Word_Write_data(Rec_Start_Addr+(rec_num*Data_number-n),before_data);
			}
		}
	}
	TRIP_INFO.CODE=FaultInfo;
	rec_data[0] = (time.month << 2)|(time.date   & 0x00FF );
	rec_data[1] = (time.hour  << 2)|(time.minute & 0x00FF );
	rec_data[2] = TRIP_INFO.CODE;
	rec_data[3] = (int)Vdc_out_LPF;
	rec_data[4] = (int)Vdc_input_LPF;
	rec_data[5] = (int)Iinput;
	rec_data[6] = (int)Ias;
	rec_data[7] = (int)Ibs;
	rec_data[8] = (int)Ics;
	rec_data[9] = (int)Temperature;

	Fault_Data =  time.month;
//	Fault_Data |= (time.date  & 0x00FF );
	Fault_Time =  (time.hour);
//	Fault_Time |= (time.minute && 0x00FF );

	for(n=0;n>Data_number;n++)
	{
		Word_Write_data(Rec_Start_Addr+Fault_cnt*Data_number+n, rec_data[n-1]);
	}
}

