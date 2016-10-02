//====================================================
//
// Copyright(C) 2008 HanYoung ELEC. Co., LTD.
// Designed by Paul B.H Park(idonno2000)
//
//
//	filename : display.h
//	description : display 헤더파일
//
//	history : - frist designed at 2008-05-28 3:58오후
//
//====================================================



#ifndef _DISPLAY_H_
#define _DISPLAY_H_

//#include <avr/pgmspace.h>


#define MENU_RUN 1
#define MENU_STOP 0


//extern unsigned long naviMENU;
extern unsigned char RefreshFlag;

extern unsigned char EventFlagA;
extern unsigned char EventFlagB;
extern unsigned char EventFlagC;
extern unsigned char EventFlagD;
extern unsigned char EventFlagE;

extern unsigned char EventTimeA;
extern unsigned char EventTimeB;
extern unsigned char EventTimeC;
extern unsigned char EventTimeD;
extern unsigned char EventTimeE;

extern unsigned char TimeTic_500ms;

extern unsigned char MenuDisplay_Handler;

extern unsigned int gRequestAddr;

extern void(*MenuDisplay)(void);

extern unsigned int DATA_Registers[BUF_MAX];

void DisplayInit(void);
void MainSYSTEM(void);

void Point_inversion(unsigned char x, unsigned char y,  char cnt);
void Point_ONOFF(unsigned char bit, unsigned char OnOff);
void LoadDiagram(void);	

void PAGE_LineScroll(unsigned char line);
void irregularPAGE_handler(void);
void refreshPAGE_handler(void);


void SYS_password_clr(void);
void SYS_Base_KeyFunction(void);

const char* _cpy_flash2memory(char __flash *format);
const char* _TEXT(char const *format, ...);


void SYS_cursor_ON_Mode(unsigned char mode);


	void 	SYS_0						(void);
	void 	SYS_1						(void);
	void 	SYS_2						(void);
	void 	SYS_3						(void);
	void 	SYS_4						(void);
	void 	SYS_5						(void);
	void 	SYS_6						(void);

	void 	SYS_0_0					(void);
	void 	SYS_0_1					(void);
	void 	SYS_0_2					(void);
	void 	SYS_0_3					(void);
	void 	SYS_0_4					(void);
	void 	SYS_0_5					(void);

	void 	SYS_1_0					(void);
	void 	SYS_1_1					(void);
	void 	SYS_1_2					(void);

	void 	SYS_1_0_00			(void);
	void 	SYS_1_0_01			(void);
	void 	SYS_1_0_02			(void);
	void 	SYS_1_0_03			(void);
	void 	SYS_1_0_04			(void);
	void 	SYS_1_0_05			(void);
	void 	SYS_1_0_06			(void);
	void 	SYS_1_0_07			(void);
	void 	SYS_1_0_08			(void);
	void 	SYS_1_0_09			(void);
	void 	SYS_1_0_10			(void);
	void 	SYS_1_0_11			(void);
	void 	SYS_1_0_12			(void);
	void 	SYS_1_0_13			(void);

	void 	SYS_1_1_00			(void);
	void 	SYS_1_1_01			(void);
	void 	SYS_1_1_02			(void);
	void 	SYS_1_1_03			(void);
	void 	SYS_1_1_04			(void);

	void 	SYS_1_2_00			(void);
	void 	SYS_1_2_01			(void);
	void 	SYS_1_2_02			(void);
	void 	SYS_1_2_03			(void);
	void 	SYS_1_2_04			(void);
	void 	SYS_1_2_05			(void);
	void 	SYS_1_2_06			(void);
	void 	SYS_1_2_07			(void);
	void 	SYS_1_2_08			(void);

	void 	SYS_2_00				(void);
	void 	SYS_2_01				(void);
	void 	SYS_2_02				(void);
	void 	SYS_2_03				(void);
	void 	SYS_2_04				(void);
	void 	SYS_2_05				(void);
	void 	SYS_2_06				(void);
	void 	SYS_2_07				(void);
	void 	SYS_2_08				(void);
	void 	SYS_2_09				(void);
	void 	SYS_2_10				(void);
	void 	SYS_2_11				(void);
	void 	SYS_2_12				(void);
	void 	SYS_2_13				(void);
	void 	SYS_2_14				(void);
	void 	SYS_2_15				(void);
	void 	SYS_2_16				(void);
	void 	SYS_2_17				(void);
	void 	SYS_2_18				(void);
	void 	SYS_2_19				(void);
	void 	SYS_2_20				(void);
	void 	SYS_2_21				(void);
	void 	SYS_2_22				(void);
	void 	SYS_2_23				(void);
	void 	SYS_2_24				(void);
       void        SYS_2_29                       (void);

	void 	SYS_2_00_00			(void);		
	void 	SYS_2_00_01			(void);		
	void 	SYS_2_00_02			(void);		
	void 	SYS_2_00_03			(void);		
	void 	SYS_2_00_04			(void);		
	void 	SYS_2_00_05			(void);		
	void 	SYS_2_00_06			(void);		
	void 	SYS_2_00_07			(void);		
	void 	SYS_2_00_08			(void);		
	void 	SYS_2_00_09			(void);		
	void 	SYS_2_00_10			(void);		
	void 	SYS_2_00_11			(void);		
	void 	SYS_2_00_12			(void);		
	void 	SYS_2_00_13			(void);		
	void 	SYS_2_00_14			(void);		
	void 	SYS_2_00_15			(void);		

	void 	SYS_2_01_00			(void);		
	void 	SYS_2_01_01			(void);		
	void 	SYS_2_01_02			(void);		
	void 	SYS_2_01_03			(void);		
	void 	SYS_2_01_04			(void);		
	void 	SYS_2_01_05			(void);		
	void 	SYS_2_01_06			(void);		
	void 	SYS_2_01_07			(void);		
	void 	SYS_2_01_08			(void);		
	void 	SYS_2_01_09			(void);		

	void 	SYS_2_02_00			(void);		
	void 	SYS_2_02_01			(void);		
	void 	SYS_2_02_02			(void);		
	void 	SYS_2_02_03			(void);		
	void 	SYS_2_02_04			(void);		
	void 	SYS_2_02_05			(void);		
	void 	SYS_2_02_06			(void);		
	void 	SYS_2_02_07			(void);		
	void 	SYS_2_02_08			(void);		
	void 	SYS_2_02_09			(void);		

	void 	SYS_2_03_00			(void);		
	void 	SYS_2_03_01			(void);		
	void 	SYS_2_03_02			(void);	 
	void 	SYS_2_03_03			(void);		
	void 	SYS_2_03_04			(void);		
	void 	SYS_2_03_05			(void);		
	void 	SYS_2_03_06			(void);		
	void 	SYS_2_03_07			(void);		
	void 	SYS_2_03_08			(void);		
	void 	SYS_2_03_09			(void);		
	void 	SYS_2_03_10			(void);		
	void 	SYS_2_03_11			(void);	 
	void 	SYS_2_03_12			(void);		
	void 	SYS_2_03_13			(void);		
	void 	SYS_2_03_14			(void);		
	void 	SYS_2_03_15			(void);		
	void 	SYS_2_03_16			(void);		
	void 	SYS_2_03_17			(void);		
	void 	SYS_2_03_18			(void);		
	void 	SYS_2_03_19			(void);		
	void 	SYS_2_03_20			(void);		
	void 	SYS_2_03_21			(void);		
	void 	SYS_2_03_22			(void);		
	void 	SYS_2_03_23			(void);		
	void 	SYS_2_03_24			(void);		
	void 	SYS_2_03_25			(void);		
	void 	SYS_2_03_26			(void);		
	void 	SYS_2_03_27			(void);		
	void 	SYS_2_03_28			(void);		
	void 	SYS_2_03_29			(void);		
	void 	SYS_2_03_30			(void);		
	void 	SYS_2_03_31			(void);		
	void 	SYS_2_03_32			(void);		
	void 	SYS_2_03_33			(void);		
	void 	SYS_2_03_34			(void);		
	void 	SYS_2_03_35			(void);		
	void 	SYS_2_03_36			(void);		
	void 	SYS_2_03_37			(void);		
	void 	SYS_2_03_38			(void);		
	void 	SYS_2_03_39			(void);		
	void 	SYS_2_03_40			(void);		
	void 	SYS_2_03_41			(void);		
	void 	SYS_2_03_42			(void);		
	void 	SYS_2_03_43			(void);		
	void 	SYS_2_03_44			(void);	 
	void 	SYS_2_03_45			(void);		
	void 	SYS_2_03_46			(void);		
	void 	SYS_2_03_47			(void);		
	void 	SYS_2_03_48			(void);		
	void 	SYS_2_03_49			(void);		
	void 	SYS_2_03_50			(void);		
	void 	SYS_2_03_51			(void);		
	void 	SYS_2_03_52			(void);		

	void 	SYS_2_04_00			(void);		
	void 	SYS_2_04_01			(void);		
	void 	SYS_2_04_02			(void);		
	void 	SYS_2_04_03			(void);		
	void 	SYS_2_04_04			(void);		
	void 	SYS_2_04_05			(void);		
	void 	SYS_2_04_06			(void);		
	void 	SYS_2_04_07			(void);		
	void 	SYS_2_04_08			(void);		
	void 	SYS_2_04_09			(void);		
	void 	SYS_2_04_10			(void);		
	void 	SYS_2_04_11			(void);		
	void 	SYS_2_04_12			(void);		
	void 	SYS_2_04_13			(void);		
	void 	SYS_2_04_14			(void);		
	void 	SYS_2_04_15			(void);		
	void 	SYS_2_04_16			(void);		
	void 	SYS_2_04_17			(void);		
	void 	SYS_2_04_18			(void);		
	void 	SYS_2_04_19			(void);		
	void 	SYS_2_04_20			(void);		
	void 	SYS_2_04_21			(void);		
	void 	SYS_2_04_22			(void);		
	void 	SYS_2_04_23			(void);		
	void 	SYS_2_04_24			(void);		
	void 	SYS_2_04_25			(void);		
	void 	SYS_2_04_26			(void);		
	void 	SYS_2_04_27			(void);		
	void 	SYS_2_04_28			(void);		
	void 	SYS_2_04_29			(void);		
	void 	SYS_2_04_30			(void);		
	void 	SYS_2_04_31			(void);		
	void 	SYS_2_04_32			(void);		
	void 	SYS_2_04_33			(void);		
	void 	SYS_2_04_34			(void);		
	void 	SYS_2_04_35			(void);		
	void 	SYS_2_04_36			(void);		
	void 	SYS_2_04_37			(void);		
	void 	SYS_2_04_38			(void);		
	void 	SYS_2_04_39			(void);		
	void 	SYS_2_04_40			(void);		
	void 	SYS_2_04_41			(void);		
	void 	SYS_2_04_42			(void);		
	void 	SYS_2_04_43			(void);		
	void 	SYS_2_04_44			(void);		
	void 	SYS_2_04_45			(void);		
	void 	SYS_2_04_46			(void);		
	void 	SYS_2_04_47			(void);		
	void 	SYS_2_04_48			(void);		
	void 	SYS_2_04_49			(void);		
	void 	SYS_2_04_50			(void);		
	void 	SYS_2_04_51			(void);		
	void 	SYS_2_04_52			(void);		

	void 	SYS_2_05_00			(void);		
	void 	SYS_2_05_01			(void);		
	void 	SYS_2_05_02			(void);		
	void 	SYS_2_05_03			(void);		
	void 	SYS_2_05_04			(void);		
	void 	SYS_2_05_05			(void);		
	void 	SYS_2_05_06			(void);		
	void 	SYS_2_05_07			(void);		
	void 	SYS_2_05_08			(void);		
	void 	SYS_2_05_09			(void);		
	void 	SYS_2_05_10			(void);		
	void 	SYS_2_05_11			(void);		
	void 	SYS_2_05_12			(void);		
	void 	SYS_2_05_13			(void);		
	void 	SYS_2_05_14			(void);		
	void 	SYS_2_05_15			(void);		
	void 	SYS_2_05_16			(void);		
	void 	SYS_2_05_17			(void);		
	void 	SYS_2_05_18			(void);		
	void 	SYS_2_05_19			(void);		
	void 	SYS_2_05_20			(void);		
	void 	SYS_2_05_21			(void);		
	void 	SYS_2_05_22			(void);		
	void 	SYS_2_05_23			(void);		
	void 	SYS_2_05_24			(void);		
	void 	SYS_2_05_25			(void);		
	void 	SYS_2_05_26			(void);		
	void 	SYS_2_05_27			(void);		
	void 	SYS_2_05_28			(void);		
	void 	SYS_2_05_29			(void);		
	void 	SYS_2_05_30			(void);		
	void 	SYS_2_05_31			(void);		
	void 	SYS_2_05_32			(void);		
	void 	SYS_2_05_33			(void);		
	void 	SYS_2_05_34			(void);		
	void 	SYS_2_05_35			(void);		
	void 	SYS_2_05_36			(void);		
	void 	SYS_2_05_37			(void);		
	void 	SYS_2_05_38			(void);		
	void 	SYS_2_05_39			(void);		
	void 	SYS_2_05_40			(void);		
	void 	SYS_2_05_41			(void);		
	void 	SYS_2_05_42			(void);		
	void 	SYS_2_05_43			(void);		
	void 	SYS_2_05_44			(void);		

	void 	SYS_2_06_00			(void);		
	void 	SYS_2_06_01			(void);		
	void 	SYS_2_06_02			(void);		
	void 	SYS_2_06_03			(void);		
	void 	SYS_2_06_04			(void);		
	void 	SYS_2_06_05			(void);		
	void 	SYS_2_06_06			(void);		
	void 	SYS_2_06_07			(void);		
	void 	SYS_2_06_08			(void);		
	void 	SYS_2_06_09			(void);		
	void 	SYS_2_06_10			(void);		
	void 	SYS_2_06_11			(void);		
	void 	SYS_2_06_12			(void);		
	void 	SYS_2_06_13			(void);		
	void 	SYS_2_06_14			(void);		
	void 	SYS_2_06_15			(void);		
	void 	SYS_2_06_16			(void);		
	void 	SYS_2_06_17			(void);		
	void 	SYS_2_06_18			(void);		
	void 	SYS_2_06_19			(void);		
	void 	SYS_2_06_20			(void);		
	void 	SYS_2_06_21			(void);		
	void 	SYS_2_06_22			(void);		
	void 	SYS_2_06_23			(void);		
	void 	SYS_2_06_24			(void);		
	void 	SYS_2_06_25			(void);		
	void 	SYS_2_06_26			(void);		
	void 	SYS_2_06_27			(void);		
	void 	SYS_2_06_28			(void);		
	void 	SYS_2_06_29			(void);		
	void 	SYS_2_06_30			(void);		
	void 	SYS_2_06_31			(void);		
	void 	SYS_2_06_32			(void);		
	void 	SYS_2_06_33			(void);		
	void 	SYS_2_06_34			(void);		
	void 	SYS_2_06_35			(void);		
	void 	SYS_2_06_36			(void);		
	void 	SYS_2_06_37			(void);		
	void 	SYS_2_06_38			(void);		
	void 	SYS_2_06_39			(void);		
	void 	SYS_2_06_40			(void);		
	void 	SYS_2_06_41			(void);		
	void 	SYS_2_06_42			(void);		
	void 	SYS_2_06_43			(void);		
	void 	SYS_2_06_44			(void);		
	void 	SYS_2_06_45			(void);		
	void 	SYS_2_06_46			(void);		
	void 	SYS_2_06_47			(void);		
	void 	SYS_2_06_48			(void);		
	void 	SYS_2_06_49			(void);		
	void 	SYS_2_06_50			(void);		
	void 	SYS_2_06_51			(void);		
	void 	SYS_2_06_52			(void);		
	void 	SYS_2_06_53			(void);		
	void 	SYS_2_06_54			(void);		
	void 	SYS_2_06_55			(void);		
	void 	SYS_2_06_56			(void);		
	void 	SYS_2_06_57			(void);		
	void 	SYS_2_06_58			(void);		
	void 	SYS_2_06_59			(void);		
	void 	SYS_2_06_60			(void);		
	void 	SYS_2_06_61			(void);		
	void 	SYS_2_06_62			(void);		
	void 	SYS_2_06_63			(void);		
	void 	SYS_2_06_64			(void);		
	void 	SYS_2_06_65			(void);		
	void 	SYS_2_06_66			(void);		
	void 	SYS_2_06_67			(void);		
	void 	SYS_2_06_68			(void);		
	void 	SYS_2_06_69			(void);		
	void 	SYS_2_06_70			(void);		

	void 	SYS_2_07_00			(void);		
	void 	SYS_2_07_01			(void);		
	void 	SYS_2_07_02			(void);		
	void 	SYS_2_07_03			(void);		
	void 	SYS_2_07_04			(void);		
	void 	SYS_2_07_05			(void);		
	void 	SYS_2_07_06			(void);		
	void 	SYS_2_07_07			(void);		
	void 	SYS_2_07_08			(void);		
	void 	SYS_2_07_09			(void);		
	void 	SYS_2_07_10			(void);		
	void 	SYS_2_07_11			(void);		
	void 	SYS_2_07_12			(void);		
	void 	SYS_2_07_13			(void);		
	void 	SYS_2_07_14			(void);		
	void 	SYS_2_07_15			(void);		
	void 	SYS_2_07_16			(void);		
	void 	SYS_2_07_17			(void);		
	void 	SYS_2_07_18			(void);		
	void 	SYS_2_07_19			(void);		
	void 	SYS_2_07_20			(void);		
	void 	SYS_2_07_21			(void);		
	void 	SYS_2_07_22			(void);		
	void 	SYS_2_07_23			(void);		
	void 	SYS_2_07_24			(void);		
	void 	SYS_2_07_25			(void);		
	void 	SYS_2_07_26			(void);		
	void 	SYS_2_07_27			(void);		
	void 	SYS_2_07_28			(void);		

	void 	SYS_2_08_00			(void);		
	void 	SYS_2_08_01			(void);		
	void 	SYS_2_08_02			(void);		
	void 	SYS_2_08_03			(void);		
	void 	SYS_2_08_04			(void);		
	void 	SYS_2_08_05			(void);		
	void 	SYS_2_08_06			(void);		
	void 	SYS_2_08_07			(void);		
	void 	SYS_2_08_08			(void);		
	void 	SYS_2_08_09			(void);		
	void 	SYS_2_08_10			(void);		
	void 	SYS_2_08_11			(void);		
	void 	SYS_2_08_12			(void);		
	void 	SYS_2_08_13			(void);		
	void 	SYS_2_08_14			(void);		
	void 	SYS_2_08_15			(void);		
	void 	SYS_2_08_16			(void);		
	void 	SYS_2_08_17			(void);		
	void 	SYS_2_08_18			(void);		
	void 	SYS_2_08_19			(void);		

	void 	SYS_2_09_00			(void);		
	void 	SYS_2_09_01			(void);		
	void 	SYS_2_09_02			(void);		
	void 	SYS_2_09_03			(void);		
	void 	SYS_2_09_04			(void);		
	void 	SYS_2_09_05			(void);		
	void 	SYS_2_09_06			(void);		
	void 	SYS_2_09_07			(void);		
	void 	SYS_2_09_08			(void);		
	void 	SYS_2_09_09			(void);		
	void 	SYS_2_09_10			(void);		
	void 	SYS_2_09_11			(void);		
	void 	SYS_2_09_12			(void);		
	void 	SYS_2_09_13			(void);		
	void 	SYS_2_09_14			(void);		
	void 	SYS_2_09_15			(void);		
	void 	SYS_2_09_16			(void);		

	void 	SYS_2_10_00			(void);		
	void 	SYS_2_10_01			(void);		
	void 	SYS_2_10_02			(void);		
	void 	SYS_2_10_03			(void);		
	void 	SYS_2_10_04			(void);		
	void 	SYS_2_10_05			(void);		
	void 	SYS_2_10_06			(void);		
	void 	SYS_2_10_07			(void);		
	void 	SYS_2_10_08			(void);		
	void 	SYS_2_10_09			(void);		
	void 	SYS_2_10_10			(void);		
	void 	SYS_2_10_11			(void);		
	void 	SYS_2_10_12			(void);		
	void 	SYS_2_10_13			(void);		
	void 	SYS_2_10_14			(void);		
	void 	SYS_2_10_15			(void);		
	void 	SYS_2_10_16			(void);		

	void 	SYS_2_11_00			(void);		
	void 	SYS_2_11_01			(void);		
	void 	SYS_2_11_02			(void);		
	void 	SYS_2_11_03			(void);		
	void 	SYS_2_11_04			(void);		
	void 	SYS_2_11_05			(void);		
	void 	SYS_2_11_06			(void);		

	void 	SYS_2_12_00			(void);		
	void 	SYS_2_12_01			(void);		
	void 	SYS_2_12_02			(void);		
	void 	SYS_2_12_03			(void);		
	void 	SYS_2_12_04			(void);		
	void 	SYS_2_12_05			(void);		
	void 	SYS_2_12_06			(void);		
	void 	SYS_2_12_07			(void);		

	void 	SYS_2_13_00			(void);		
	void 	SYS_2_13_01			(void);		
	void 	SYS_2_13_02			(void);		
	void 	SYS_2_13_03			(void);		
	void 	SYS_2_13_04			(void);		
	void 	SYS_2_13_05			(void);		
	void 	SYS_2_13_06			(void);		
	void 	SYS_2_13_07			(void);		
	void 	SYS_2_13_08			(void);		
	void 	SYS_2_13_09			(void);		
	void 	SYS_2_13_10			(void);		
	void 	SYS_2_13_11			(void);		

	void 	SYS_2_14_00			(void);		
	void 	SYS_2_14_01			(void);		
	void 	SYS_2_14_02			(void);		
	void 	SYS_2_14_03			(void);		
	void 	SYS_2_14_04			(void);		
	void 	SYS_2_14_05			(void);		
	void 	SYS_2_14_06			(void);		
	void 	SYS_2_14_07			(void);		
	void 	SYS_2_14_08			(void);		

	void 	SYS_2_15_00			(void);		
	void 	SYS_2_15_01			(void);		
	void 	SYS_2_15_02			(void);		
	void 	SYS_2_15_03			(void);		
	void 	SYS_2_15_04			(void);		
	void 	SYS_2_15_05			(void);		
	void 	SYS_2_15_06			(void);		
	void 	SYS_2_15_07			(void);		
	void 	SYS_2_15_08			(void);		
	void 	SYS_2_15_09			(void);		
	void 	SYS_2_15_10			(void);		
	void 	SYS_2_15_11			(void);		
	void 	SYS_2_15_12			(void);		
	void 	SYS_2_15_13			(void);		
	void 	SYS_2_15_14			(void);		
	void 	SYS_2_15_15			(void);		
	void 	SYS_2_15_16			(void);		
	void 	SYS_2_15_17			(void);		
	void 	SYS_2_15_18			(void);		
	void 	SYS_2_15_19			(void);		
	void 	SYS_2_15_20			(void);		
	void 	SYS_2_15_21			(void);		
	void 	SYS_2_15_22			(void);		
	void 	SYS_2_15_23			(void);		
	void 	SYS_2_15_24			(void);		
	void 	SYS_2_15_25			(void);		
	void 	SYS_2_15_26			(void);		
	void 	SYS_2_15_27			(void);		
	void 	SYS_2_15_28			(void);		

	void 	SYS_2_16_00			(void);		
	void 	SYS_2_16_01			(void);		
	void 	SYS_2_16_02			(void);		
	void 	SYS_2_16_03			(void);		
	void 	SYS_2_16_04			(void);		
	void 	SYS_2_16_05			(void);		
	void 	SYS_2_16_06			(void);		
	void 	SYS_2_16_07			(void);		
	void 	SYS_2_16_08			(void);		
	void 	SYS_2_16_09			(void);		
	void 	SYS_2_16_10			(void);		
	void 	SYS_2_16_11			(void);		
	void 	SYS_2_16_12			(void);		
	void 	SYS_2_16_13			(void);		
	void 	SYS_2_16_14			(void);		
	void 	SYS_2_16_15			(void);		
	void 	SYS_2_16_16			(void);		
	void 	SYS_2_16_17			(void);		
	void 	SYS_2_16_18			(void);		
	void 	SYS_2_16_19			(void);		
	void 	SYS_2_16_20			(void);		
	void 	SYS_2_16_21			(void);		
	void 	SYS_2_16_22			(void);		
	void 	SYS_2_16_23			(void);		
	void 	SYS_2_16_24			(void);		
	void 	SYS_2_16_25			(void);		
	void 	SYS_2_16_26			(void);		
	void 	SYS_2_16_27			(void);		
	void 	SYS_2_16_28			(void);		

	void 	SYS_2_17_00			(void);		
	void 	SYS_2_17_01			(void);		
	void 	SYS_2_17_02			(void);		
	void 	SYS_2_17_03			(void);		
	void 	SYS_2_17_04			(void);		
	void 	SYS_2_17_05			(void);		
	void 	SYS_2_17_06			(void);		
	void 	SYS_2_17_07			(void);		
	void 	SYS_2_17_08			(void);		
	void 	SYS_2_17_09			(void);		
	void 	SYS_2_17_10			(void);		
	void 	SYS_2_17_11			(void);		
	void 	SYS_2_17_12			(void);		
	void 	SYS_2_17_13			(void);		
	void 	SYS_2_17_14			(void);		
	void 	SYS_2_17_15			(void);		
	void 	SYS_2_17_16			(void);		
	void 	SYS_2_17_17			(void);		
	void 	SYS_2_17_18			(void);		
	void 	SYS_2_17_19			(void);		
	void 	SYS_2_17_20			(void);		
	void 	SYS_2_17_21			(void);		
	void 	SYS_2_17_22			(void);		
	void 	SYS_2_17_23			(void);		
	void 	SYS_2_17_24			(void);		
	void 	SYS_2_17_25			(void);		
	void 	SYS_2_17_26			(void);		
	void 	SYS_2_17_27			(void);		
	void 	SYS_2_17_28			(void);		
	void 	SYS_2_17_29			(void);		
	void 	SYS_2_17_30			(void);		
	void 	SYS_2_17_31			(void);		
	void 	SYS_2_17_32			(void);		
	void 	SYS_2_17_33			(void);		
	void 	SYS_2_17_34			(void);		
	void 	SYS_2_17_35			(void);		
	void 	SYS_2_17_36			(void);		
	void 	SYS_2_17_37			(void);		
	void 	SYS_2_17_38			(void);		
	void 	SYS_2_17_39			(void);		
	void 	SYS_2_17_40			(void);		
	void 	SYS_2_17_41			(void);		
	void 	SYS_2_17_42			(void);		
	void 	SYS_2_17_43			(void);		
	void 	SYS_2_17_44			(void);		
	void 	SYS_2_17_45			(void);		
	void 	SYS_2_17_46			(void);		
	void 	SYS_2_17_47			(void);		
	void 	SYS_2_17_48			(void);		
	void 	SYS_2_17_49			(void);		
	void 	SYS_2_17_50			(void);		
	void 	SYS_2_17_51			(void);		

	void 	SYS_2_18_00			(void);		
	void 	SYS_2_18_01			(void);		
	void 	SYS_2_18_02			(void);		
	void 	SYS_2_18_03			(void);		
	void 	SYS_2_18_04			(void);		
	void 	SYS_2_18_05			(void);		
	void 	SYS_2_18_06			(void);		
	void 	SYS_2_18_07			(void);		
	void 	SYS_2_18_08			(void);		
	void 	SYS_2_18_09			(void);		
	void 	SYS_2_18_10			(void);		
	void 	SYS_2_18_11			(void);		
	void 	SYS_2_18_12			(void);		
	void 	SYS_2_18_13			(void);		
	void 	SYS_2_18_14			(void);		
	void 	SYS_2_18_15			(void);		
	void 	SYS_2_18_16			(void);		
	void 	SYS_2_18_17			(void);		
	void 	SYS_2_18_18			(void);		
	void 	SYS_2_18_19			(void);		
	void 	SYS_2_18_20			(void);		
	void 	SYS_2_18_21			(void);		
	void 	SYS_2_18_22			(void);		
	void 	SYS_2_18_23			(void);		
	void 	SYS_2_18_24			(void);		
	void 	SYS_2_18_25			(void);		
	void 	SYS_2_18_26			(void);		
	void 	SYS_2_18_27			(void);		
	void 	SYS_2_18_28			(void);		
	void 	SYS_2_18_29			(void);		
	void 	SYS_2_18_30			(void);		
	void 	SYS_2_18_31			(void);		
	void 	SYS_2_18_32			(void);		
	void 	SYS_2_18_33			(void);		
	void 	SYS_2_18_34			(void);		
	void 	SYS_2_18_35			(void);		
	void 	SYS_2_18_36			(void);		
	void 	SYS_2_18_37			(void);		
	void 	SYS_2_18_38			(void);		
	void 	SYS_2_18_39			(void);		
	void 	SYS_2_18_40			(void);		
	void 	SYS_2_18_41			(void);		
	void 	SYS_2_18_42			(void);		
	void 	SYS_2_18_43			(void);		
	void 	SYS_2_18_44			(void);		
	void 	SYS_2_18_45			(void);		
	void 	SYS_2_18_46			(void);		
	void 	SYS_2_18_47			(void);		
	void 	SYS_2_18_48			(void);		
	void 	SYS_2_18_49			(void);		

	void 	SYS_2_19_00			(void);		
	void 	SYS_2_19_01			(void);		
	void 	SYS_2_19_02			(void);		
	void 	SYS_2_19_03			(void);		
	void 	SYS_2_19_04			(void);		
	void 	SYS_2_19_05			(void);		
	void 	SYS_2_19_06			(void);		
	void 	SYS_2_19_07			(void);		
	void 	SYS_2_19_08			(void);		
	void 	SYS_2_19_09			(void);		
	void 	SYS_2_19_10			(void);		
	void 	SYS_2_19_11			(void);		
	void 	SYS_2_19_12			(void);		
	void 	SYS_2_19_13			(void);		
	void 	SYS_2_19_14			(void);		
	void 	SYS_2_19_15			(void);		
	void 	SYS_2_19_16			(void);		
	void 	SYS_2_19_17			(void);		
	void 	SYS_2_19_18			(void);		
	void 	SYS_2_19_19			(void);		
	void 	SYS_2_19_20			(void);		
	void 	SYS_2_19_21			(void);		
	void 	SYS_2_19_22			(void);		
	void 	SYS_2_19_23			(void);		
	void 	SYS_2_19_24			(void);		
	void 	SYS_2_19_25			(void);		
	void 	SYS_2_19_26			(void);		
	void 	SYS_2_19_27			(void);		
	void 	SYS_2_19_28			(void);		
	void 	SYS_2_19_29			(void);		
	void 	SYS_2_19_30			(void);		
	void 	SYS_2_19_31			(void);		
	void 	SYS_2_19_32			(void);		
	void 	SYS_2_19_33			(void);		
	void 	SYS_2_19_34			(void);		
	void 	SYS_2_19_35			(void);		
	void 	SYS_2_19_36			(void);		
	void 	SYS_2_19_37			(void);		
	void 	SYS_2_19_38			(void);		
	void 	SYS_2_19_39			(void);		
	void 	SYS_2_19_40			(void);		
	void 	SYS_2_19_41			(void);		

	void 	SYS_2_20_00			(void);		
	void 	SYS_2_20_01			(void);		
	void 	SYS_2_20_02			(void);		
	void 	SYS_2_20_03			(void);		
	void 	SYS_2_20_04			(void);		
	void 	SYS_2_20_05			(void);		
	void 	SYS_2_20_06			(void);		
	void 	SYS_2_20_07			(void);		
	void 	SYS_2_20_08			(void);		
	void 	SYS_2_20_09			(void);		
	void 	SYS_2_20_10			(void);		
	void 	SYS_2_20_11			(void);		
	void 	SYS_2_20_12			(void);		
	void 	SYS_2_20_13			(void);		
	void 	SYS_2_20_14			(void);		
	void 	SYS_2_20_15			(void);		
	void 	SYS_2_20_16			(void);		
	void 	SYS_2_20_17			(void);		
	void 	SYS_2_20_18			(void);		
	void 	SYS_2_20_19			(void);		
	void 	SYS_2_20_20			(void);		
	void 	SYS_2_20_21			(void);		
	void 	SYS_2_20_22			(void);		
	void 	SYS_2_20_23			(void);		
	void 	SYS_2_20_24			(void);		
	void 	SYS_2_20_25			(void);		
	void 	SYS_2_20_26			(void);		
	void 	SYS_2_20_27			(void);		
	void 	SYS_2_20_28			(void);		
	void 	SYS_2_20_29			(void);		
	void 	SYS_2_20_30			(void);		
	void 	SYS_2_20_31			(void);		
	void 	SYS_2_20_32			(void);		
	void 	SYS_2_20_33			(void);		
	void 	SYS_2_20_34			(void);		
	void 	SYS_2_20_35			(void);		
	void 	SYS_2_20_36			(void);		
	void 	SYS_2_20_37			(void);		
	void 	SYS_2_20_38			(void);		
	void 	SYS_2_20_39			(void);		
	void 	SYS_2_20_40			(void);		
	void 	SYS_2_20_41			(void);		

	void 	SYS_2_21_00			(void);		
	void 	SYS_2_21_01			(void);		
	void 	SYS_2_21_02			(void);		
	void 	SYS_2_21_03			(void);		
	void 	SYS_2_21_04			(void);		
	void 	SYS_2_21_05			(void);		
	void 	SYS_2_21_06			(void);		
	void 	SYS_2_21_07			(void);		
	void 	SYS_2_21_08			(void);		
	void 	SYS_2_21_09			(void);		
	void 	SYS_2_21_10			(void);		
	void 	SYS_2_21_11			(void);		
	void 	SYS_2_21_12			(void);		
	void 	SYS_2_21_13			(void);		
	void 	SYS_2_21_14			(void);		
	void 	SYS_2_21_15			(void);		

	void 	SYS_2_22_00			(void);		
	void 	SYS_2_22_01			(void);		
	void 	SYS_2_22_02			(void);		
	void 	SYS_2_22_03			(void);		
	void 	SYS_2_22_04			(void);		
	void 	SYS_2_22_05			(void);		
	void 	SYS_2_22_06			(void);		
	void 	SYS_2_22_07			(void);		
	void 	SYS_2_22_08			(void);		

	void 	SYS_2_23_00			(void);		
	void 	SYS_2_23_01			(void);		
	void 	SYS_2_23_02			(void);		
	void 	SYS_2_23_03			(void);		
	void 	SYS_2_23_04			(void);		
	void 	SYS_2_23_05			(void);		
	void 	SYS_2_23_06			(void);		
	void 	SYS_2_23_07			(void);		
	void 	SYS_2_23_08			(void);		
	void 	SYS_2_23_09			(void);		
	void 	SYS_2_23_10			(void);		
	void 	SYS_2_23_11			(void);

	void 	SYS_2_29_00			(void);		
	void 	SYS_2_29_01			(void);		
	void 	SYS_2_29_02			(void);		
	void 	SYS_2_29_03			(void);		
	void 	SYS_2_29_04			(void);		
	void 	SYS_2_29_05			(void);		
	void 	SYS_2_29_06			(void);		
	void 	SYS_2_29_07			(void);		
	void 	SYS_2_29_08			(void);		
	void 	SYS_2_29_09			(void);		
	void 	SYS_2_29_10			(void);		
	void 	SYS_2_29_11			(void);		
	void 	SYS_2_29_12			(void);		
	void 	SYS_2_29_13			(void);		
	void 	SYS_2_29_14			(void);		
	void 	SYS_2_29_15			(void);		
	void 	SYS_2_29_16			(void);		
	void 	SYS_2_29_17			(void);		
	void 	SYS_2_29_18			(void);		
	void 	SYS_2_29_19			(void);		
	void 	SYS_2_29_20			(void);	
	void 	SYS_2_29_21			(void);		
	void 	SYS_2_29_22			(void);		
	void 	SYS_2_29_23			(void);		
	void 	SYS_2_29_24			(void);		
	void 	SYS_2_29_25			(void);		
	void 	SYS_2_29_26			(void);

	void 	SYS_3_00				(void);		
	void 	SYS_3_01				(void);
	void 	SYS_3_02				(void);

	void 	SYS_3_00_3			(void);			
	void 	SYS_3_01_3			(void);
	void 	SYS_3_02_3			(void);

	void 	SYS_3_00_3_4		(void);			
	void 	SYS_3_01_3_4		(void);
	void 	SYS_3_02_3_4		(void);

	void 	SYS_4_00				(void);		
	void 	SYS_4_01				(void);
	void 	SYS_4_02				(void);
	void 	SYS_4_03				(void);		
	void 	SYS_4_04				(void);
	void 	SYS_4_05				(void);
	void 	SYS_4_06				(void);		
	void 	SYS_4_07				(void);
	void 	SYS_4_08				(void);

	void 	SYS_4_00_00			(void);
	void 	SYS_4_00_01			(void);
	void 	SYS_4_00_02			(void);
	void 	SYS_4_00_03			(void);
	void 	SYS_4_00_04			(void);
	void 	SYS_4_00_05			(void);
	void 	SYS_4_00_06			(void);
	void 	SYS_4_00_07			(void);
	void 	SYS_4_00_08			(void);
	void 	SYS_4_00_09			(void);
	void 	SYS_4_00_10			(void);

	void 	SYS_4_01_00			(void);
	void 	SYS_4_01_01			(void);
	void 	SYS_4_01_02			(void);
	void 	SYS_4_01_03			(void);
	void 	SYS_4_01_04			(void);
	void 	SYS_4_01_05			(void);
	void 	SYS_4_01_06			(void);
	void 	SYS_4_01_07			(void);
	void 	SYS_4_01_08			(void);
	void 	SYS_4_01_09			(void);
	void 	SYS_4_01_10			(void);

	void 	SYS_4_02_00			(void);
	void 	SYS_4_02_01			(void);
	void 	SYS_4_02_02			(void);
	void 	SYS_4_02_03			(void);
	void 	SYS_4_02_04			(void);
	void 	SYS_4_02_05			(void);
	void 	SYS_4_02_06			(void);
	void 	SYS_4_02_07			(void);
	void 	SYS_4_02_08			(void);
	void 	SYS_4_02_09			(void);
	void 	SYS_4_02_10			(void);

	void 	SYS_4_03_00			(void);
	void 	SYS_4_03_01			(void);
	void 	SYS_4_03_02			(void);
	void 	SYS_4_03_03			(void);
	void 	SYS_4_03_04			(void);
	void 	SYS_4_03_05			(void);
	void 	SYS_4_03_06			(void);
	void 	SYS_4_03_07			(void);
	void 	SYS_4_03_08			(void);
	void 	SYS_4_03_09			(void);
	void 	SYS_4_03_10			(void);

	void 	SYS_4_04_00			(void);
	void 	SYS_4_04_01			(void);
	void 	SYS_4_04_02			(void);
	void 	SYS_4_04_03			(void);
	void 	SYS_4_04_04			(void);
	void 	SYS_4_04_05			(void);
	void 	SYS_4_04_06			(void);
	void 	SYS_4_04_07			(void);
	void 	SYS_4_04_08			(void);
	void 	SYS_4_04_09			(void);
	void 	SYS_4_04_10			(void);

	void 	SYS_4_05_00			(void);
	void 	SYS_4_05_01			(void);
	void 	SYS_4_05_02			(void);
	void 	SYS_4_05_03			(void);
	void 	SYS_4_05_04			(void);
	void 	SYS_4_05_05			(void);
	void 	SYS_4_05_06			(void);
	void 	SYS_4_05_07			(void);
	void 	SYS_4_05_08			(void);
	void 	SYS_4_05_09			(void);
	void 	SYS_4_05_10			(void);

	void 	SYS_4_06_00			(void);
	void 	SYS_4_06_01			(void);
	void 	SYS_4_06_02			(void);
	void 	SYS_4_06_03			(void);
	void 	SYS_4_06_04			(void);
	void 	SYS_4_06_05			(void);
	void 	SYS_4_06_06			(void);
	void 	SYS_4_06_07			(void);
	void 	SYS_4_06_08			(void);
	void 	SYS_4_06_09			(void);
	void 	SYS_4_06_10			(void);

	void 	SYS_4_07_00			(void);
	void 	SYS_4_07_01			(void);
	void 	SYS_4_07_02			(void);
	void 	SYS_4_07_03			(void);
	void 	SYS_4_07_04			(void);
	void 	SYS_4_07_05			(void);
	void 	SYS_4_07_06			(void);
	void 	SYS_4_07_07			(void);
	void 	SYS_4_07_08			(void);
	void 	SYS_4_07_09			(void);
	void 	SYS_4_07_10			(void);

	void 	SYS_4_08_00			(void);
	void 	SYS_4_08_01			(void);
	void 	SYS_4_08_02			(void);
	void 	SYS_4_08_03			(void);
	void 	SYS_4_08_04			(void);
	void 	SYS_4_08_05			(void);
	void 	SYS_4_08_06			(void);
	void 	SYS_4_08_07			(void);
	void 	SYS_4_08_08			(void);
	void 	SYS_4_08_09			(void);
	void 	SYS_4_08_10			(void);

	void 	SYS_5_00				(void);
	void 	SYS_5_01				(void);
	void 	SYS_5_02				(void);

	void 	SYS_5_00_04			(void);
	void 	SYS_5_01_03			(void);
	void 	SYS_5_01_05			(void);
	void 	SYS_5_02_05			(void);

	void 	SYS_6_00				(void);
	void 	SYS_6_01				(void);
	void 	SYS_6_02				(void);

	void 	SYS_6_01_00			(void);
	void 	SYS_6_01_01			(void);
	void 	SYS_6_01_02			(void);
	void 	SYS_6_01_03			(void);
	void 	SYS_6_01_04			(void);

	void 	SYS_6_01_00_05	(void);
	void 	SYS_6_01_00_06	(void);
	void 	SYS_6_01_01_05	(void);
	void 	SYS_6_01_01_06	(void);
	void 	SYS_6_01_02_05	(void);
	void 	SYS_6_01_02_06	(void);
	void 	SYS_6_01_03_05	(void);
	void 	SYS_6_01_03_06	(void);
	void 	SYS_6_01_04_05	(void);
	void 	SYS_6_01_04_06	(void);

	void 	SYS_6_02_00			(void);
	void 	SYS_6_02_01			(void);
	void 	SYS_6_02_02			(void);
	void 	SYS_6_02_03			(void);
	void 	SYS_6_02_04			(void);

	void 	SYS_6_02_00_05	(void);
	void 	SYS_6_02_00_06	(void);
	void 	SYS_6_02_00_07	(void);
	void 	SYS_6_02_01_05	(void);
	void 	SYS_6_02_01_06	(void);
	void 	SYS_6_02_01_07	(void);
	void 	SYS_6_02_02_05	(void);
	void 	SYS_6_02_02_06	(void);
	void 	SYS_6_02_02_07	(void);
	void 	SYS_6_02_03_05	(void);
	void 	SYS_6_02_03_06	(void);
	void 	SYS_6_02_03_07	(void);
	void 	SYS_6_02_04_05	(void);
	void 	SYS_6_02_04_06	(void);
	void 	SYS_6_02_04_07	(void);

	void 	SYS_0xFFFFFFFF	(void);


#endif
