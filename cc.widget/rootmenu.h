/*****************************************************************/
/**	File	: rootmenu.h										**/
/**	Summary	: CcWgtRootMenu Object Define						**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.01										**/
/**			: 2015.01.02										**/
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
/**	Object  : CcWgtRootMenu										**/
/**	Summary	: CcWgtRootMenu Object Define						**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.01										**/
/**			: 2015.01.02										**/
/*****************************************************************/
typedef class _CcWgtRootMenu
{
	CcWgtMenuItem *rootObj;						// CcWgtRootMenu Object
	CcWgtMenu *menu;							// Menu of CcWgtRootMenu Object

	void (*Init)(class _CcWgtRootMenu *this, gchar *label);
	void (*SetLabel)(class _CcWgtRootMenu *this, gchar *label);
	const gchar *(*GetLabel)(class _CcWgtRootMenu *this);
	void (*PrependItem)(class _CcWgtRootMenu *this, CcWgtMenuItem *menuitem);
	void (*AppendItem)(class _CcWgtRootMenu *this, CcWgtMenuItem *menuitem);

} CcWgtRootMenu;

/*****************************************************************/
/**	Summary	: Function Declare									**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.01										**/
/**			: 2015.01.02										**/
/*****************************************************************/
CcWgtRootMenu *newCcWgtRootMenu();												// New CcWgtRootMenu Object
void InitCcWgtRootMenu(CcWgtRootMenu *this, gchar *label);						// Initialize CcWgtRootMenu object
void SetCcWgtRootMenuLabel(CcWgtRootMenu *this, gchar *label);					// Set CcWgtRootMenu Label
const gchar *GetCcWgtRootMenuLabel(CcWgtRootMenu *this);						// Get CcWgtRootMenu Label
void CcWgtRootMenuPrependItem(CcWgtRootMenu *this, CcWgtMenuItem *menuitem);	// CcWgtRootMenu Append Item to before
void CcWgtRootMenuAppendItem(CcWgtRootMenu *this, CcWgtMenuItem *menuitem);		// CcWgtRootMenu Append Item to after

#endif	/* _ROOTMENU_H_ */


