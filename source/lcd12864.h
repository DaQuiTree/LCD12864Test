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

void InitLCD12864();//��ʼ��Һ��
void LCDClearAll();//����

/*�ַ���ʾ*/
void LCDShowStr(uint8 x, uint8 y, uint8* str, uint8 strlen);	//д���ַ���
void LCDShowCN(uint8 x, uint8 y, uint16* str, uint8 strlen);	//д������
void LCDClearArea(uint8 x, uint8 y);

/*�������*/
void LCDSetCursor(uint8 x, uint8 y);//�趨���
void LCDShowCursor();//��ʾ���
void LCDCancelCursor();//ȡ����ʾ���

/* ��ͼ���� */
void LCDInitImage(); //��ʼ��ͼ��RAM����0��
void LCDClearImage(uint8 x, uint8 y);	 //���16*16����
void LCDDrawArea(uint8 x, uint8 y, uint8* image);	//��16*16ͼ��
void LCDShowImage(uint8* image);//��ȫ��ͼ

#endif