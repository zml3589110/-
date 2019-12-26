/*************************************************
function:LED¶¯Ì¬É¨Ãè
input:
output:
**************************************************/
/**************************************************/
/**************************************************/
#ifndef __DRIVE_DYNAMIC_LED__
#define __DRIVE_DYNAMIC_LED__
#include "def.h"

#define _DSPBUFF_NUMBER		8
/**************************************************/
/**************************************************/
/**************************************************/
//;-SUBROUTIN
extern void __LED_drv();
//;-DATA DEFINE
extern volatile uchar 
Dyn_buff[8]
;

//;-FLAG DEFINE
extern volatile bit 
b_led_next
;

#endif