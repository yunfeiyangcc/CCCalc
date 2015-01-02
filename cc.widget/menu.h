/*****************************************************************/
/**	File	: menu.h											**/
/**	Summary	: Menu Object Define								**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/*****************************************************************/

#ifndef	_MENU_H_
#define	_MENU_H_

/*****************************************************************/
/** include head file											**/
/*****************************************************************/
#include "common.h"
#include "menuitem.h"

/*****************************************************************/
/** Define														**/
/*****************************************************************/

/*****************************************************************/
/**	Object  : Menu												**/
/**	Summary	: Menu Object Define								**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/*****************************************************************/
typedef class _Menu
{
	GtkWidget* obj;						// Menu Object

	void (*Init)(class _Menu *this);
	void (*PrependItem)(class _Menu *this, MenuItem *menuitem);
	void (*AppendItem)(class _Menu *this, MenuItem *menuitem);

} Menu;


/*****************************************************************/
/**	Summary	: Function Declare									**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/*****************************************************************/
Menu *newMenu();											// New Menu Object
void InitMenu(Menu *this);									// Initialize Menu object
void MenuPrependItem(Menu *this, MenuItem *menuitem);		// Menu Prepend Item to before
void MenuAppendItem(Menu *this, MenuItem *menuitem);		// Menu Append Item to after

#endif	/* _MENU_H_ */


