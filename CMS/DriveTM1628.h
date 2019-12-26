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
