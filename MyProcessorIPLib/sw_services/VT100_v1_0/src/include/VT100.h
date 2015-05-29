/*
 * VT100.h
 *
 *  Created on: 29 May 2015
 *      Author: GriffinR
 */

#ifndef VT100_H
#define VT100_H

// Function Macros for simple VT100 escape codes
#define VT100_Black_Text() printf("%c[30m",0x1B)
#define VT100_Red_Text() printf("%c[31m",0x1B)
#define VT100_Green_Text() printf("%c[32m",0x1B)
#define VT100_Yellow_Text() printf("%c[33m",0x1B)
#define VT100_Blue_Text() printf("%c[34m",0x1B)
#define VT100_Magenta_Text() printf("%c[35m",0x1B)
#define VT100_Cyan_Text() printf("%c[36m",0x1B)
#define VT100_White_Text() printf("%c[37m",0x1B)
#define VT100_Default_Text() printf("%c[39m",0x1B)

#define VT100_Black_Background() printf("%c[40m",0x1B)
#define VT100_Red_Background() printf("%c[41m",0x1B)
#define VT100_Green_Background() printf("%c[42m",0x1B)
#define VT100_Yellow_Background() printf("%c[43m",0x1B)
#define VT100_Blue_Background() printf("%c[44m",0x1B)
#define VT100_Magenta_Background() printf("%c[45m",0x1B)
#define VT100_Cyan_Background() printf("%c[46m",0x1B)
#define VT100_White_Background() printf("%c[47m",0x1B)
#define VT100_Default_Background() printf("%c[49m",0x1B)

#define VT100_Cursor_Home() printf("%c[H",0x1B)
#define VT100_Cursor_Set_XY_Position(X,Y) printf("%c[%d;%dH",0x1B,X,Y)
#define VT100_Cursor_Show() printf("%c[?25h",0x1B)
#define VT100_Cursor_Hide() printf("%c[?25l",0x1B)
#define VT100_Cursor_Up(Rows) printf("%c[%dA",0x1B,Rows)
#define VT100_Cursor_Down(Rows) printf("%c[%dB",0x1B,Rows)
#define VT100_Cursor_Left(Columns) printf("%c[%dC",0x1B,Columns)
#define VT100_Cursor_Right(Columns) printf("%c[%dD",0x1B,Columns)

#define VT100_Clear_Line_To_End() printf("%c[0K",0x1B)
#define VT100_Clear_Line_Up_To_Cursor() printf("%c[1K",0x1B)
#define VT100_Clear_Line() printf("%c[2K",0x1B)
#define VT100_Clear_Screen() printf("%c[2J",0x1B)
#define VT100_Clear_Screen_To_End() printf("%c[J",0x1B)
#define VT100_Clear_Screen_Up_To_Cursor() printf("%c[1J",0x1B)

#define VT100_Text_Attributes_None() printf("%c[0m",0x1B)
#define VT100_Text_Attributes_Bold() printf("%c[1m",0x1B)
#define VT100_Text_Attributes_Dim() printf("%c[2m",0x1B)
#define VT100_Text_Attributes_Blink() printf("%c[5m",0x1B)
#define VT100_Text_Attributes_Reverse() printf("%c[7m",0x1B)
#define VT100_Text_Attributes_Hidden() printf("%c[8m",0x1B)

#define VT100_Mode_Insert() printf("%c[4h",0x1B)
#define VT100_Mode_Overwrite() printf("%c[4l",0x1B)
#define VT100_Mode_Scrolling_Smooth() printf("%c[?4h",0x1B)
#define VT100_Mode_Scrolling_Jump() printf("%c[?4l",0x1B)

#define VT100_Editing_Insert_Lines(Lines) printf("%c[%dL",0x1B,Lines)
#define VT100_Editing_Delete_Lines(Lines) printf("%c[%dM",0x1B,Lines)
#define VT100_Editing_Delete_Characters(Characters) printf("%c[%dP",0x1B,Characters)



// Function Prototypes


#endif /* VT100_H */
