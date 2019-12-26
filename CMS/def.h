#ifndef __DEF__
#define __DEF__
#pragma warning disable 752,759,373

#define uchar unsigned char
#define uint unsigned int
#define ulong unsigned long

typedef struct 
{
	unsigned char Bit0 : 1;
	unsigned char Bit1 : 1;
	unsigned char Bit2 : 1;
	unsigned char Bit3 : 1;
	unsigned char Bit4 : 1; 
	unsigned char Bit5 : 1;
	unsigned char Bit6 : 1; 
	unsigned char Bit7 : 1;
}MakeBits;

typedef union {
	MakeBits	bits;
	unsigned char	byte;
}MakeBitsType,BIT;
/*************************************************************************/
/*************************************************************************/
#define bit0	0x01
#define bit1	0x02
#define bit2	0x04
#define bit3	0x08
#define bit4	0x10
#define bit5	0x20
#define bit6	0x40
#define bit7	0x80
/*************************************************************************/
//对寄存器位处理bit=0x01,0x02,0x04...0x80
#define set_bit(dat,bit)	dat|=bit	
#define clr_bit(dat,bit)	dat&=~bit	
#define clr_buff(dat)		dat=0
#define set_buff(dat)		dat=0xff
#define BIT(n) (1 << (n))

#define SET(Reg,n)    Reg |= BIT(n); 
#define CLR(Reg,n)    Reg &= ~BIT(n); 

#define MAX(x, y)               (((x) > (y)) ? (x) : (y))
#define MIN(x, y)               (((x) < (y)) ? (x) : (y))
#define DELTA(x, y)             (((x) > (y)) ? ((x)-(y)) : ((y)-(x)))

#define HiByte_ref(addr)        (*((uchar*)&addr))
#define LoByte_ref(addr)        (*((uchar*)&addr+1))
#define MakeWord(high,low)      (((uint)(high) << 8) + (uint)(low))
#define HiByte(u16Data)         ((uchar)((u16Data) >> 8))
#define LoByte(u16Data)         ((uchar)((u16Data) & 0xff))
#define HiNibble(u8Data)        ((uchar)(((u8Data) >> 4) & 0xf))
#define LoNibble(u8Data)        ((uchar)(( u8Data) & 0xf))
#define SetBit(u8Data, bBit)    (u8Data |= (1 << bBit))
#define ClrBit(u8Data, bBit)    (u8Data &=~(1 << bBit))
#define TestBit(u8Data,bBit)    (u8Data &  (1 << bBit))
#define CplBit(u8Data, bBit)    (u8Data ^= (1 << bBit))

#endif

