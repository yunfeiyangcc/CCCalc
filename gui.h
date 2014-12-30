/*****************************************************************/
/**	File	: gui.h												**/
/**	Summary	: Create GUI										**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.28										**/
/**     	: 2014.12.30										**/
/*****************************************************************/

#ifndef	_GUI_H_
#define	_GUI_H_

/*****************************************************************/
/** include head file											**/
/*****************************************************************/
#include "common.h"
#include "window.h"
#include "table.h"
#include "textbox.h"
#include "button.h"

/*****************************************************************/
/** Define														**/
/*****************************************************************/

/*****************************************************************/
/** Global Variables											**/
/*****************************************************************/
/* Calculator Window */
Window *calcGuiWindow;

/* Calculator Frame */
Table *calcGuiFrameTable;				// Frame Tablee
Table *calcGuiKeyTable;					// Key Table

/* Claculator TextBox */
TextBox *calcGuiTextBox;				// Display

/* Button */
Button *calcGuiBtnZore;					// Button 0
Button *calcGuiBtnOne;					// Button 1
Button *calcGuiBtnTwo;					// Button 2
Button *calcGuiBtnThree;				// Button 3
Button *calcGuiBtnFour;					// Button 4
Button *calcGuiBtnFive;					// Button 5
Button *calcGuiBtnSix;					// Button 6
Button *calcGuiBtnSeven;				// Button 7
Button *calcGuiBtnEight;				// Button 8
Button *calcGuiBtnNine;					// Button 9

Button *calcGuiBtnClear;				// Button Clear		C
Button *calcGuiBtnDel;					// Button Delete	D
Button *calcGuiBtnAdd;					// Button Add		+
Button *calcGuiBtnSub;					// Button Sub		-
Button *calcGuiBtnMul;					// Button Mul		*
Button *calcGuiBtnDiv;					// Button Div		/
Button *calcGuiBtnEqual;				// Button Equal		=


/*****************************************************************/
/**	Summary	: Function Declare									**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.28										**/
/*****************************************************************/
void guiInit(gint argc, gchar *argv[]);

#endif	/* _GUI_H_ */

