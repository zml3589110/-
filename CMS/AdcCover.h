//*************************************************
//***** LIBRARY EXTERNAL REFERENCE FOR C CODE     *
//*************************************************
/****************************************************************
function:AD������ȡ
input:���ɿع����--scr_on������õ�-80(50HZ){66(60HZ)}
output:ad_vol-��ѹAD,ad_main-���¿�AD,ad_fan-���Ȱ�AD
****************************************************************/
#ifndef __ADC_COVER__
#define __ADC_COVER__
#include "def.h"
//;-SUBROUTIN
extern void CHK_AD_READ();		//�����ж������Ƿ����
extern void Ad_Waitting();		//���ڳ���MAIN��
//;-DATA DEFINE
extern uchar 
ad_vol,
ad_main,
ad_fan;

extern volatile uchar 
CHK_50HZ,		//����Ƶ�ʱ���
CHK_60HZ,		//����ADC�汾�ű���
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