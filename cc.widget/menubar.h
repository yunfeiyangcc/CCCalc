/*****************************************************************/
/**	File	: menubar.h											**/
/**	Summary	: CcWgtMenuBar Object Define						**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.01										**/
/**			: 2015.01.02										**/
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
/**	Object  : CcWgtMenuBar 										**/
/**	Summary	: CcWgtMenuBar Object Define						**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.01										**/
/**			: 2015.01.02										**/
/*****************************************************************/
typedef class _CcWgtMenuBar
{
	GtkWidget* obj;						// CcWgtMenuBar Object

	void (*Init)(class _CcWgtMenuBar *this);
	void (*PrependRootMenu)(class _CcWgtMenuBar *this, CcWgtRootMenu *rootmenu);
	void (*AppendRootMenu)(class _CcWgtMenuBar *this, CcWgtRootMenu *rootmenu);

} CcWgtMenuBar;

/*****************************************************************/
/**	Summary	: Function Declare									**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.01										**/
/**			: 2015.01.02										**/
/*****************************************************************/
CcWgtMenuBar *newCcWgtMenuBar();												// New CcWgtMenuBar Object
void InitCcWgtMenuBar(CcWgtMenuBar *this);										// Initialize CcWgtMenuBar object
void CcWgtMenuBarPrependRootMenu(CcWgtMenuBar *this, CcWgtRootMenu *rootmenu);	// CcWgtMenuBar Prepend RootMenu to before
void CcWgtMenuBarAppendRootMenu(CcWgtMenuBar *this, CcWgtRootMenu *rootmenu);	// CcWgtMenuBar Append RootMenu to after

#endif	/* _MENUBAR_H_ */


