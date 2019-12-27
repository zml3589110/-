//*************************************************
//***** LIBRARY EXTERNAL REFERENCE FOR C CODE     *
//*************************************************
/*********************************
#define p_clk		RC7
#define p_stb		RD2
#define p_dat		RC6
#define pc_dat	TRISC6
**********************************/
#ifndef __DRIVE_TM1628__
#define __DRIVE_TM1628__
#define __SCNA_KEY_1628__		//按键读取
#include "def.h"
#define _DSPBUFF_NUMBER		9			//驱动BUFF组数
//;-SUBROUTIN
extern void WRITE_DSPLAY(uchar Brightness);		//WRITE DSPBUFF	//亮度等级:0x88-0x8F
extern void WREAD_KEYBUF();										//WRITE KEYDBUFF
//;-DATA DEFINE
extern uchar 
dsp_buff_TM[_DSPBUFF_NUMBER],		//DSPBUFF DATA
keydat_						//KEY DATA
;											
//;-FLAG DEFINE
#endif
/*******************************************************/
/*******************************************************/
/*******************************************************/
/*************************更新日志***********************/
/*
==========V0.02===========
1-解决TM1628读取按键异常,而CMS1628正常的问题
2-增加驱动设置
==========V0.01===========
1-常用1628驱动显示
2-驱动按键
*/
