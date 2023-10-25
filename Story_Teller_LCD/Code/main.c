#include "StdTypes.h"
#include "MemMap.h"
#include "Utils.h"

#include "DIO.h"
#include "LCD_Interface.h"

#include "Story_Teller_LCD.h"

#define  F_CPU	8000000
#include <util/delay.h>

int main(void)
{
	DIO_Init();
	LCD_Init();
	
	draw_ChildrensLastLine();
	Display_Story();
	make_Duaa();
	draw_ChildrensSecondLine();
	draw_ChildrensLastLine();
	End_Story();
	
    while(1) 
    {
	}
}