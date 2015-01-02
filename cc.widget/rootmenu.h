/*****************************************************************/
/**	File	: rootmenu.h										**/
/**	Summary	: RootMenu Object Define							**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.01										**/
/*****************************************************************/

#ifndef	_ROOTMENU_H_
#define	_ROOTMENU_H_

/*****************************************************************/
/** include head file											**/
/*****************************************************************/
#include "common.h"
#include "menuitem.h"
#include "menu.h"

/*****************************************************************/
/** Define														**/
/*****************************************************************/

/*****************************************************************/
/**	Object  : RootMenu											**/
/**	Summary	: RootMenu Object Define							**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.01										**/
/*****************************************************************/
typedef class _RootMenu
{
	MenuItem *rootObj;						// RootMenu Object
	Menu *menu;								// Menu of RootMenu Object

	void (*Init)(class _RootMenu *this, gchar *label);
	void (*SetLabel)(class _RootMenu *this, gchar *label);
	const gchar *(*GetLabel)(class _RootMenu *this);
	void (*PrependItem)(class _RootMenu *this, MenuItem *menuitem);
	void (*AppendItem)(class _RootMenu *this, MenuItem *menuitem);

} RootMenu;

/*****************************************************************/
/**	Summary	: Function Declare									**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.01										**/
/*****************************************************************/
RootMenu *newRootMenu();										// New RootMenu Object
void InitRootMenu(RootMenu *this, gchar *label);				// Initialize RootMenu object
void SetRootMenuLabel(RootMenu *this, gchar *label);			// Set RootMenu Label
const gchar *GetRootMenuLabel(RootMenu *this);					// Get RootMenu Label
void RootMenuPrependItem(RootMenu *this, MenuItem *menuitem);	// RootMenu Append Item to before
void RootMenuAppendItem(RootMenu *this, MenuItem *menuitem);	// RootMenu Append Item to after

#endif	/* _ROOTMENU_H_ */


