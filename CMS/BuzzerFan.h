//*************************************************
//***** LIBRARY EXTERNAL REFERENCE FOR C CODE     *
//*************************************************
/*************************************************
function:����������
input:
output:������״̬����
**************************************************/
/**************************************************/
/**************************************************/
#ifndef __BEEP_FAN__
#define __BEEP_FAN__
#include "def.h"
/**************************************************/
/**************************************************/
/**************************************************/
//;-SUBROUTIN
extern inline void BEEP_INIT(uchar _BLONG);
extern inline void BEEP_PRO();
extern inline void BEEP_FAN_RUN();
//;-DATA DEFINE
//;-FLAG DEFINE
extern volatile bit b_beep_on,b_fan_on;
#endif
