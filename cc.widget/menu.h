/*****************************************************************/
/**	File	: menu.h											**/
/**	Summary	: CcWgtMenu Object Define							**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.02										**/
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
/**	Object  : CcWgtMenu											**/
/**	Summary	: CcWgtMenu Object Define							**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.02										**/
/*****************************************************************/
typedef class _CcWgtMenu
{
	GtkWidget* obj;						// CcWgtMenu Object

	void (*Init)(class _CcWgtMenu *this);
	void (*PrependItem)(class _CcWgtMenu *this, CcWgtMenuItem *menuitem);
	void (*AppendItem)(class _CcWgtMenu *this, CcWgtMenuItem *menuitem);

} CcWgtMenu;


/*****************************************************************/
/**	Summary	: Function Declare									**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.02										**/
/*****************************************************************/
CcWgtMenu *newCcWgtMenu();											// New CcWgtMenu Object
void InitCcWgtMenu(CcWgtMenu *this);								// Initialize CcWgtMenu object
void CcWgtMenuPrependItem(CcWgtMenu *this, CcWgtMenuItem *menuitem);// CcWgtMenu Prepend Item to before
void CcWgtMenuAppendItem(CcWgtMenu *this, CcWgtMenuItem *menuitem);	// CcWgtMenu Append Item to after

#endif	/* _MENU_H_ */


