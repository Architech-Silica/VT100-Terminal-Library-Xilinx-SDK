/*
 * example_design.c
 *
 *  Created on: 29 May 2015
 *      Author: GriffinR
 */

#include <stdio.h>
#include "VT100.h"



int main()
{
	VT100_Clear_Screen();
	VT100_Cursor_Home();

	VT100_Red_Background();
	VT100_White_Text();
	printf("******************************\n\r");
	printf("* ");
	VT100_Blue_Text();
	VT100_White_Background();
	printf(" RC Receiver Decoder Test ");
	VT100_Red_Background();
	VT100_White_Text();
	printf(" *\n\r");
	printf("******************************\n\r");

	printf("\n\r\n\r");

	VT100_Default_Background();
	VT100_Default_Text();
	printf("This is text in the default colours\n\r");

	printf("\n\r");

	VT100_Text_Attributes_Bold();
	printf("This is bold text\n\r");

	VT100_Text_Attributes_None();
	VT100_Text_Attributes_Dim();
	printf("This is dim text\n\r");

	VT100_Text_Attributes_None();

	printf("\n\r");

	VT100_Black_Text();
	printf("This is black text\n\r");
	VT100_Red_Text();
	printf("This is red text\n\r");
	VT100_Green_Text();
	printf("This is green text\n\r");
	VT100_Yellow_Text();
	printf("This is yellow text\n\r");
	VT100_Blue_Text();
	printf("This is blue text\n\r");
	VT100_Cyan_Text();
	printf("This is cyan text\n\r");
	VT100_Magenta_Text();
	printf("This is magenta text\n\r");
	VT100_White_Text();
	printf("This is white text\n\r");

	printf("\n\r");

	VT100_Default_Text();
	VT100_Black_Background();
	printf("This is black background\n\r");
	VT100_Red_Background();
	printf("This is red background\n\r");
	VT100_Green_Background();
	printf("This is green background\n\r");
	VT100_Yellow_Background();
	printf("This is yellow background\n\r");
	VT100_Blue_Background();
	printf("This is blue background\n\r");
	VT100_Cyan_Background();
	printf("This is cyan background\n\r");
	VT100_Magenta_Background();
	printf("This is magenta background\n\r");
	VT100_White_Background();
	printf("This is white background\n\r");


	VT100_Default_Text();
	VT100_Default_Background();

	printf("\n\r\n\r");
	printf("## Finished ##\n\r");

	return 0;
}
