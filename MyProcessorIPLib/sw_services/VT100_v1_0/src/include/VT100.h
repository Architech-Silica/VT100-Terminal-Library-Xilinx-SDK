#ifndef __VT100_H
#define __VT100_H

#ifndef VT100PRINTF
#define VT100PRINTF	printf
#endif

// Function Macros for simple VT100 escape codes
#define VT100_Black_Text() VT100PRINTF("\x1B[30m")
#define VT100_Red_Text() VT100PRINTF("\x1B[31m")
#define VT100_Green_Text() VT100PRINTF("\x1B[32m")
#define VT100_Yellow_Text() VT100PRINTF("\x1B[33m")
#define VT100_Blue_Text() VT100PRINTF("\x1B[34m")
#define VT100_Magenta_Text() VT100PRINTF("\x1B[35m")
#define VT100_Cyan_Text() VT100PRINTF("\x1B[36m")
#define VT100_White_Text() VT100PRINTF("\x1B[37m")
#define VT100_Default_Text() VT100PRINTF("\x1B[39m")

#define VT100_Black_Background() VT100PRINTF("\x1B[40m")
#define VT100_Red_Background() VT100PRINTF("\x1B[41m")
#define VT100_Green_Background() VT100PRINTF("\x1B[42m")
#define VT100_Yellow_Background() VT100PRINTF("\x1B[43m")
#define VT100_Blue_Background() VT100PRINTF("\x1B[44m")
#define VT100_Magenta_Background() VT100PRINTF("\x1B[45m")
#define VT100_Cyan_Background() VT100PRINTF("\x1B[46m")
#define VT100_White_Background() VT100PRINTF("\x1B[47m")
#define VT100_Default_Background() VT100PRINTF("\x1B[49m")

#define VT100_Cursor_Home() VT100PRINTF("\x1B[H")
#define VT100_Cursor_Set_XY_Position(X,Y) VT100PRINTF("\x1B[%d;%dH",X,Y)
#define VT100_Cursor_Show() VT100PRINTF("\x1B[?25h")
#define VT100_Cursor_Hide() VT100PRINTF("\x1B[?25l")
#define VT100_Cursor_Up(Rows) VT100PRINTF("\x1B[%dA",Rows)
#define VT100_Cursor_Down(Rows) VT100PRINTF("\x1B[%dB",Rows)
#define VT100_Cursor_Left(Columns) VT100PRINTF("\x1B[%dC",Columns)
#define VT100_Cursor_Right(Columns) VT100PRINTF("\x1B[%dD",Columns)

#define VT100_Clear_Line_To_End() VT100PRINTF("\x1B[0K")
#define VT100_Clear_Line_Up_To_Cursor() VT100PRINTF("\x1B[1K")
#define VT100_Clear_Line() VT100PRINTF("\x1B[2K")
#define VT100_Clear_Screen() VT100PRINTF("\x1B[2J")
#define VT100_Clear_Screen_To_End() VT100PRINTF("\x1B[J")
#define VT100_Clear_Screen_Up_To_Cursor() VT100PRINTF("\x1B[1J")

#define VT100_Text_Attributes_None() VT100PRINTF("\x1B[0m")
#define VT100_Text_Attributes_Bold() VT100PRINTF("\x1B[1m")
#define VT100_Text_Attributes_Dim() VT100PRINTF("\x1B[2m")
#define VT100_Text_Attributes_Blink() VT100PRINTF("\x1B[5m")
#define VT100_Text_Attributes_Reverse() VT100PRINTF("\x1B[7m")
#define VT100_Text_Attributes_Hidden() VT100PRINTF("\x1B[8m")

#define VT100_Mode_Insert() VT100PRINTF("\x1B[4h")
#define VT100_Mode_Overwrite() VT100PRINTF("\x1B[4l")
#define VT100_Mode_Scrolling_Smooth() VT100PRINTF("\x1B[?4h")
#define VT100_Mode_Scrolling_Jump() VT100PRINTF("\x1B[?4l")

#define VT100_Editing_Insert_Lines(Lines) VT100PRINTF("\x1B[%dL",Lines)
#define VT100_Editing_Delete_Lines(Lines) VT100PRINTF("\x1B[%dM",Lines)
#define VT100_Editing_Delete_Characters(Characters) VT100PRINTF("\x1B[%dP",Characters)



// Function Prototypes


#endif /* __VT100_H */