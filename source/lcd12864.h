/*
 * lcd12864.h
 * --------
 * func��������lcd12864��صĽӿں���
 */


#ifndef _LCD12864_H
#define _LCD12864_H

#ifndef _LCD12864_C
//extern ����
#endif

void InitLCD12864();
void LCDInitImage();
void LCDShowStr(uint8 x, uint8 y, uint8* str, uint8 strlen);	//д���ַ���
void LCDShowCN(uint8 x, uint8 y, uint16* str, uint8 strlen);	//д������
void LCDShowImage(uint8* image);//��ͼ
void LCDSetCursor(uint8 x, uint8 y);//�趨���
void LCDShowCursor();//��ʾ���
void LCDCancelCursor();//ȡ����ʾ���
void LCDClearAll();//����
void LCDDrawArea(uint8 x, uint8 y, uint8* image);

#endif