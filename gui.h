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
#include "cc.widget/common.h"
#include "cc.widget/window.h"
#include "cc.widget/menubar.h"
#include "cc.widget/rootmenu.h"
#include "cc.widget/menu.h"
#include "cc.widget/menuitem.h"
#include "cc.widget/table.h"
#include "cc.widget/textbox.h"
#include "cc.widget/button.h"

/*****************************************************************/
/** Define														**/
/*****************************************************************/

#define		FILE_MENU_ITEM_NUM		(1)			// File Menu Item Number

/*****************************************************************/
/** Global Variables											**/
/*****************************************************************/
/* Calculator Window */
CcWgtWindow *calcGuiWindow;

/* Calculator Menu */
CcWgtMenuBar *menuBar;
CcWgtRootMenu *fileRootMenu;
CcWgtMenuItem *fileMenuItem[FILE_MENU_ITEM_NUM];


/* Calculator Frame */
CcWgtTable *calcGuiFrameTable;				// Frame Tablee
CcWgtTable *calcGuiKeyTable;					// Key Table

/* Claculator TextBox */
CcWgtTextBox *calcGuiTextBox;				// Display

/* Button */
CcWgtButton *calcGuiBtnZore;					// Button 0
CcWgtButton *calcGuiBtnOne;					// Button 1
CcWgtButton *calcGuiBtnTwo;					// Button 2
CcWgtButton *calcGuiBtnThree;				// Button 3
CcWgtButton *calcGuiBtnFour;					// Button 4
CcWgtButton *calcGuiBtnFive;					// Button 5
CcWgtButton *calcGuiBtnSix;					// Button 6
CcWgtButton *calcGuiBtnSeven;				// Button 7
CcWgtButton *calcGuiBtnEight;				// Button 8
CcWgtButton *calcGuiBtnNine;					// Button 9

CcWgtButton *calcGuiBtnClear;				// Button Clear		C
CcWgtButton *calcGuiBtnDel;					// Button Delete	D
CcWgtButton *calcGuiBtnAdd;					// Button Add		+
CcWgtButton *calcGuiBtnSub;					// Button Sub		-
CcWgtButton *calcGuiBtnMul;					// Button Mul		*
CcWgtButton *calcGuiBtnDiv;					// Button Div		/
CcWgtButton *calcGuiBtnEqual;				// Button Equal		=


/*****************************************************************/
/**	Summary	: Function Declare									**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.28										**/
/*****************************************************************/
void guiInit(gint argc, gchar *argv[]);
void guiShow();
void guiDestroy();

#endif	/* _GUI_H_ */

