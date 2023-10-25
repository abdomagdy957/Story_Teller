#include "StdTypes.h"
#include "MemMap.h"
#include "Utils.h"
#include "LCD_Interface.h"
#include "Story_Teller_LCD.h"

#define  F_CPU	8000000
#include <util/delay.h>

const u8 pattern[8] = {0x04, 0x15, 0x0E, 0x04, 0x04, 0x04, 0x0A, 0x11};
	
void Display_Story(void)
{
	LCD_Clear();
	draw_ChildrensLastLine();
	LCD_GoTo(0,0);
	LCD_WriteString("Do you know the ");
	LCD_GoTo(1,0);
	LCD_WriteString("situation in Gaza?  ");
	_delay_ms(3000);
	LCD_Clear_Position(0,0,60);
	_delay_ms(30);
	LCD_GoTo(0,0);
	LCD_WriteString("If you don't die ");
	LCD_GoTo(1,0);
	LCD_WriteString("from bombardment, u");
	LCD_GoTo(2,0);
	LCD_WriteString("will die from hunger.");
	_delay_ms(3000);
	LCD_Clear_Position(0,0,60);
	_delay_ms(30);
	LCD_GoTo(0,0);
	LCD_WriteString("If you don't die ");
	LCD_GoTo(1,0);
	LCD_WriteString("from hunger, u will");
	LCD_GoTo(2,0);
	LCD_WriteString("die from thirst.");
	_delay_ms(3000);
	LCD_Clear_Position(0,0,60);
	_delay_ms(30);
	/*************/
	LCD_GoTo(0,0);
	LCD_WriteString("Currently, ");
	LCD_GoTo(1,0);
	LCD_WriteString("Gaza lacks water,   ");
	LCD_GoTo(2,0);
	LCD_WriteString("food, electricity.");
	_delay_ms(3000);
	LCD_Clear_Position(0,0,60);
	_delay_ms(30);
	LCD_GoTo(0,0);
	LCD_WriteString("Most importantly,");
	LCD_GoTo(1,0);
	LCD_WriteString("fuel is about to    ");
	LCD_GoTo(2,0);
	LCD_WriteString("run out, which means ");
	_delay_ms(3000);
	LCD_Clear_Position(0,0,60);
	_delay_ms(30);
	LCD_GoTo(0,0);
	LCD_WriteString("the end of          ");
	LCD_GoTo(1,0);
	LCD_WriteString("healthcare and       ");
	LCD_GoTo(2,0);
	LCD_WriteString("water sanitation.  ");
	_delay_ms(3000);
	LCD_Clear_Position(0,0,59);
	_delay_ms(30);
}
void make_Duaa(void)
{
	LCD_Clear();
	LCD_GoTo(0,0);
	LCD_WriteString("Please, Pray for");
	LCD_GoTo(2,0);
	LCD_WriteString("our brothers in Gaza");
	_delay_ms(4000);
	LCD_Clear_Position(0,0,59);
}

void draw_ChildrensLastLine(void)
{
	for(u8 index=LCD_START;index<LCD_WIDTH;index++)
	{
		LCD_CustomChar(CUSTOM_CHAR_ADDRESS,pattern);
		LCD_GoTo(LCD_LAST_LINE,index);
		LCD_WriteChar(CUSTOM_CHAR_ADDRESS);
		index++;
	}
}
void draw_ChildrensSecondLine(void)
{
	for(u8 index=LCD_START;index<LCD_WIDTH;index++)
	{
		LCD_CustomChar(CUSTOM_CHAR_ADDRESS,pattern);
		LCD_GoTo(LCD_Second_LINE,index);
		LCD_WriteChar(CUSTOM_CHAR_ADDRESS);
		index++;
	}
}
void End_Story(void)
{
	LCD_GoTo(2,0);
	LCD_WriteString("End OF The Story.");
}		