/*****************************************************************/
/**	File	: menubar.h											**/
/**	Summary	: MenuBar Object Define								**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.01										**/
/*****************************************************************/

#ifndef	_MENUBAR_H_
#define	_MENUBAR_H_

/*****************************************************************/
/** include head file											**/
/*****************************************************************/
#include "common.h"
#include "rootmenu.h"

/*****************************************************************/
/** Define														**/
/*****************************************************************/

/*****************************************************************/
/**	Object  : MenuBar 											**/
/**	Summary	: MenuBar Object Define								**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.01										**/
/*****************************************************************/
typedef class _MenuBar
{
	GtkWidget* obj;						// MenuBar Object

	void (*Init)(class _MenuBar *this);
	void (*PrependRootMenu)(class _MenuBar *this, RootMenu *rootmenu);
	void (*AppendRootMenu)(class _MenuBar *this, RootMenu *rootmenu);

} MenuBar;

/*****************************************************************/
/**	Summary	: Function Declare									**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.01										**/
/*****************************************************************/
MenuBar *newMenuBar();											// New MenuBar Object
void InitMenuBar(MenuBar *this);								// Initialize MenuBar object
void MenuBarPrependRootMenu(MenuBar *this, RootMenu *rootmenu);	// MenuBar Prepend RootMenu to before
void MenuBarAppendRootMenu(MenuBar *this, RootMenu *rootmenu);	// MenuBar Append RootMenu to after

#endif	/* _MENUBAR_H_ */


