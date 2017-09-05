
/* Includes ------------------------------------------------------------------*/
#ifndef __EPAPER_H
#define __EPAPER_H
#include "sys.h"

#define  DKE213_2
#define  MONO 1
#define  RED  2

#define	Epaper_EN     PAout(12)  				//Epaper_EN  信号

#define	Epaper_BUSY   GPIO_ReadInputDataBit(GPIOC,GPIO_Pin_9) 				  //BUSY输入信号

#define	Epaper_RESET  PCout(8)  				//RESET信号
//#define	Epaper_BUSY  PCout(9)  				//RESET信号

#define	Epaper_DC     PCout(7)  				//D/C#信号 高数据 低命令
#define	Epaper_CS     PCout(6)  				//片选信号

#define	Epaper_SCK    PBout(13)  				//clk信号
#define	Epaper_SDO    PBout(15)  				//SDO

#ifdef DKE154
#define MAX_LINE_BYTES    19
#define MAX_COLUMN_BYTES	152
#define ALLSCREEN_BYTES   2888
#endif

#ifdef DKE213_1
#define MAX_LINE_BYTES    16
#define MAX_COLUMN_BYTES   250 
#define ALLSCREEN_BYTES   4000
#endif


#ifdef DKE213_2
#define MAX_LINE_BYTES    13
#define MAX_COLUMN_BYTES   212  
#define ALLSCREEN_BYTES   2756
#endif

#ifdef DKE290
#define MAX_LINE_BYTES     16
#define MAX_COLUMN_BYTES   296
#define ALLSCREEN_BYTES   4736
#endif

#ifdef DKE420
#define MAX_LINE_BYTES    50
#define MAX_COLUMN_BYTES  300
#define ALLSCREEN_BYTES   15000
#endif

void EpaperIO_Init(void);
void Epaper_READBUSY(void);
void Epaper_Write_Command(u8 cmd);
void Epaper_Write_Data(u8 data);
void Epaper_Init(void);
void LUT_Written_by_MCU(void);
void Epaper_Load_Image(u8 *datas,u32 num,u8 mode);
void Epaper_Update(void);
void Epaper_DeepSleep(void);
void Display(void);

#endif


