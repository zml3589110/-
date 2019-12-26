//*************************************************
//***** LIBRARY EXTERNAL REFERENCE FOR C CODE     *
//*************************************************
/****************************************************************
function:AD参数读取
input:带可控硅控制--scr_on最大设置点-80(50HZ){66(60HZ)}
output:ad_vol-电压AD,ad_main-主温控AD,ad_fan-风扇板AD
****************************************************************/
#ifndef __ADC_COVER__
#define __ADC_COVER__
#include "def.h"
//;-SUBROUTIN
extern void CHK_AD_READ();		//放在中断里检测是否完成
extern void Ad_Waitting();		//放在常规MAIN中
//;-DATA DEFINE
extern uchar 
ad_vol,
ad_main,
ad_fan;

extern volatile uchar 
CHK_50HZ,		//复用频率保存
CHK_60HZ,		//复用ADC版本号保存
scr_on
;

//;-FLAG DEFINE
extern volatile bit 
B_AC_60HZ,
B_FRE_CHK_OK,
B_SCR_ON,
B_SCR1_OFF,
B_SCR2_OFF,
B_SCR_ALL_ON
;
#endif