/********************  DKE EPD  ***********************************************
 * ����    ��NXF
 * ʵ��ƽ̨��EpaperDemoV5
 * ����    ������ֽ��ʼ������ 
 * ʱ��    ��2017.05.30
*******************************************************************************/
#include "epaper.h"   
#include "delay.h"  
#include "key.h" 
#include "led.h"
#include "Image.h"

extern u8  DIS_EN_FLAG;
						
			
		
/*
 * ��������EpaperIO_Init
 * ����  ����ʼ�������ֽ��ص�IO�ӿ�
 * ����  ����
 * ���  ����
 */	    
void EpaperIO_Init(void)
{
	GPIO_InitTypeDef  GPIO_InitStructure;
 	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA|RCC_APB2Periph_GPIOB|RCC_APB2Periph_GPIOC, ENABLE);//ʹ��PB�˿�ʱ��

	//EPAPER_EN
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_12 ;								//�˿�����, �������
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 		
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 			
	GPIO_Init(GPIOA, &GPIO_InitStructure);	  				     	
	
	 //SDO--->PB15  SCK-->PB13
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13|GPIO_Pin_15;		//�˿�����, �������
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 			
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 		
	GPIO_Init(GPIOB, &GPIO_InitStructure);	  				     		
	
	
	 //  CS-->PC6    D/C--->PC7   RES-->PC8  
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_6|GPIO_Pin_7|GPIO_Pin_8;		//�˿�����, �������
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 			
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 		
	GPIO_Init(GPIOC, &GPIO_InitStructure);	  				     		
	
	// BUSY--->PC9 
	GPIO_InitStructure.GPIO_Pin  = GPIO_Pin_9;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPD;	//��������
 	GPIO_Init(GPIOC, &GPIO_InitStructure);				//��ʼ��GPIO

}


/*
 * ��������SPI1_WriteByte
 * ����  ��SPIx ��дһ���ֽ�
 * ����  ��TxData:Ҫд����ֽ�
 * ���  ������ֵ:��ȡ�����ֽ�
 */
void Epaper_Spi_WriteByte(u8 TxData)
{				   			 
	u8 TempData;
	u8 scnt;
	TempData=TxData;

  Epaper_SCK =0;  
	for(scnt=0;scnt<8;scnt++)
	{ 
		if(TempData&0x80)
		  Epaper_SDO=1 ;
		else
		  Epaper_SDO=0 ;
		Epaper_SCK =1; 
    delay_us(5) ; 
	  Epaper_SCK =0;  
		TempData=TempData<<1;
		delay_us(5) ; 
  }

}
/*
 * ��������HalLcd_READBUSY
 * ����  ���ȴ�����ֽbusy�ź��ɸ߱�� 
 * ����  ����
 * ���  ����
 */	
void Epaper_READBUSY(void)
{ 
  while(1)
  {	 //=1 BUSY
     if(Epaper_BUSY==0) break;
		 delay_us(5) ;
  }  
	 delay_us(100) ;
}

/*
 * ��������Epaper_Write_Command
 * ����  ��д����
 * ����  ��cmd
 * ���  ����
 */	
void Epaper_Write_Command(u8 cmd)
{
	 Epaper_CS =1;
	 Epaper_CS =0;
   Epaper_DC=0;  // D/C#   0:command  1:data

	 delay_us(5) ;
 Epaper_Spi_WriteByte(cmd);
	 delay_us(5) ;
 Epaper_CS =1;
}


/*
 * ��������Epaper_Write_Command
 * ����  ��д����
 * ����  ��cmd
 * ���  ����
 */	
void Epaper_Write_Data(u8 data)
{
	 Epaper_CS =1;
	 Epaper_CS =0;
 Epaper_DC=1;  // D/C#   0:command  1:data

 delay_us(5) ;
 Epaper_Spi_WriteByte(data);
 delay_us(5) ;
 Epaper_CS =1;
}


/*
 * ��������Epaper_Update
 * ����  ������ֽ��ʼ�����򣬸�����ֽ�����������
 * ����  ��wave_data
 * ���  ����
 */	
void Epaper_Update(void)
{

    Epaper_Write_Command(0x22);
    Epaper_Write_Data(0xC7);    			
    Epaper_Write_Command(0x20);
    Epaper_READBUSY();
    delay_ms(100); 	
}

/*
 * ��������Epaper_DeepSleep
 * ����  ������ֽ���˯��ģʽ
 * ����  ��wave_data
 * ���  ����
 */	
void Epaper_DeepSleep(void)
{
   Epaper_Write_Command(0x10);
   Epaper_Write_Data(0x01);   
   delay_ms(100); 	
   Epaper_EN =0;///Epaper VCC Off
   delay_ms(100); 	
}
/*
 * ��������Epaper_Init
 * ����  ������ֽ��ʼ�����򣬸�����ֽ�����������
 * ����  ��wave_data
 * ���  ����
 */	
void Epaper_Init(void)
{  
    Epaper_EN=1; ///Epaper VCC On
    delay_ms(100); 
    Epaper_RESET=0;     
    delay_ms(10); 
    Epaper_RESET=1; //hard reset  
    delay_ms(10);  
    Epaper_READBUSY();
    Epaper_Write_Command(0x12); // soft reset
    Epaper_READBUSY();
	
    Epaper_Write_Command(0x74); //set analog block control       
     Epaper_Write_Data(0x54);
    Epaper_Write_Command(0x7E); //set digital block control          
     Epaper_Write_Data(0x3B);
	
    Epaper_Write_Command(0x01); //Driver output control      
     Epaper_Write_Data(0xD3);
     Epaper_Write_Data(0x00);
     Epaper_Write_Data(0x00);
	
    Epaper_Write_Command(0x11); //data entry mode       
     Epaper_Write_Data(0x01);
		
    Epaper_Write_Command(0x44); //set Ram-X address start/end position   
     Epaper_Write_Data(0x00);
    Epaper_Write_Data(0x0C);    //0x0C-->(12+1)*8=104
	
    Epaper_Write_Command(0x45); //set Ram-Y address start/end position          
     Epaper_Write_Data(0xD3);   //0xD3-->(211+1)=212
    Epaper_Write_Data(0x00);
     Epaper_Write_Data(0x00);
    Epaper_Write_Data(0x00); 
    Epaper_Write_Command(0x3C); //set border 
     Epaper_Write_Data(0x01);	

    Epaper_Write_Command(0x18); // use the internal temperature sensor
    Epaper_Write_Data(0x80);


    Epaper_Write_Command(0x22);  
    Epaper_Write_Data(0xB1); 
    Epaper_Write_Command(0x20); 
    HalLcd_READBUSY();	
}




	
/*
 * ��������Epaper_Load_Image
 * ����  ������RAM ˢ��ͼƬ
 * ����  ��datas
         ��num
         : mode 
 * ���  ����
 */	
void Epaper_Load_Image(u8 *datas,u32 num,u8 mode)
{
  u32 i; 
  u8 tempOriginal;      
  u32 tempcol=0;
  u32 templine=0;

  Epaper_Write_Command(0x4E);     
    Epaper_Write_Data(0x00);

	
	  Epaper_Write_Command(0x4F);       
		Epaper_Write_Data(0xD3);
	  Epaper_Write_Data(0x00);
	
		Epaper_READBUSY();
	if(mode==MONO)
    Epaper_Write_Command(0x24);   //write RAM for black(0)/white (1)
  if(mode==RED)
		Epaper_Write_Command(0x26);   //write RAM for black(0)/white (1)
	
	for(i=0;i<num;i++)
   {          
     tempOriginal=*(datas+templine*MAX_COLUMN_BYTES+tempcol);
     templine++;
     if(templine>=MAX_LINE_BYTES)
     {
       tempcol++;
       templine=0;
     }     
     Epaper_Write_Data(tempOriginal);
   } 

}


/*
 * ��������Display_All_White
 * ����  ��ˢ����ʾȫ��
 * ����  ����
 * ���  ����
 */	
void Display_All_White(void)
{
  u32 i,j; 


  Epaper_Write_Command(0x4E);     
    Epaper_Write_Data(0x00);

	
	  Epaper_Write_Command(0x4F);       
		Epaper_Write_Data(0xD3);
	  Epaper_Write_Data(0x00);

	
		Epaper_READBUSY();
    Epaper_Write_Command(0x24);   
		for(i=0;i<212;i++)
    {
	   for(j=0;j<13;j++)
	   {
		  Epaper_Write_Data(0xFF);
           }
    }
	 
}

/*
 * ��������Display_All_Black
 * ����  ��ˢ����ʾȫ��
 * ����  ����
 * ���  ����
 */	
void Display_All_Black(void)
{
  u32 i,j; 

  Epaper_Write_Command(0x4E);     
    Epaper_Write_Data(0x00);

	
	  Epaper_Write_Command(0x4F);       
		Epaper_Write_Data(0xD3);
	  Epaper_Write_Data(0x00);

	
		Epaper_READBUSY();
    Epaper_Write_Command(0x24);   
		for(i=0;i<212;i++)
   {
	   for(j=0;j<13;j++)
	   {
		  Epaper_Write_Data(0x00);
     }
   }

}






/*
 * ��������Display
 * ����  ��ˢ����ʾ����
 * ����  ����
 * ���  ����
 */	
void Display(void)
{
	u8 dis_num;
	dis_num=Read_dis_key_value();
	if(DIS_EN_FLAG==1)
	{
		DIS_EN_FLAG=0;
		switch(dis_num)
		{
	

		   case 0: 
			 LED_DIS=0;
		         Epaper_Init();
			 Display_All_White();
			 Epaper_Update();
			 Epaper_DeepSleep();
			 LED_DIS=1;
	           break;
		   case 1: 
		       LED_DIS=0;
		         Epaper_Init();
			 Epaper_Load_Image((u8*)ESL,ALLSCREEN_BYTES,MONO);
			 Epaper_Update();
			 Epaper_DeepSleep();
			 LED_DIS=1;
		   
                     case 2: 
			 LED_DIS=0;
		  	Epaper_Init();
			 Display_All_Black ();
			 Epaper_Update();
			 Epaper_DeepSleep();
			 LED_DIS=1;
		     break;			

	
	default:break;
		}
		
	}
  
}
