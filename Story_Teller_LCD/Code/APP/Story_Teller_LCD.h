

#ifndef STORY_TELLER_LCD_H_
#define STORY_TELLER_LCD_H_
#include "StdTypes.h"

#define LCD_WIDTH				20

#define LCD_START				0
#define LCD_END					80

#define LCD_Second_LINE			1
#define LCD_LAST_LINE			3


#define CUSTOM_CHAR_ADDRESS		0



const u8 pattern[8];
void Display_Story(void);
void make_Duaa(void);
void draw_ChildrensLastLine(void);
void draw_ChildrensSecondLine(void);
void End_Story(void);

/*

draw_ChildrensLastLine();
Display_Story();
make_Duaa();
LCD_Clear();
draw_ChildrensSecondLine();
draw_ChildrensLastLine();
End_Story();

*/
#endif /* STORY_TELLER_LCD_H_ */