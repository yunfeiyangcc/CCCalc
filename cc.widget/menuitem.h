/*****************************************************************/
/**	File	: menuitem.h										**/
/**	Summary	: CcWgtMenuItem Object Define						**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.02										**/
/*****************************************************************/

#ifndef	_MENUITEM_H_
#define	_MENUITEM_H_

/*****************************************************************/
/** include head file											**/
/*****************************************************************/
#include "common.h"

/*****************************************************************/
/** Define														**/
/*****************************************************************/

/*****************************************************************/
/**	Object  : CcWgtMenuItem 									**/
/**	Summary	: CcWgtMenuItem Object Define						**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.02										**/
/*****************************************************************/
typedef class _CcWgtMenuItem
{
	GtkWidget* obj;						// CcWgtMenuItem Object

	void (*Init)(class _CcWgtMenuItem *this, gchar *label);
	void (*SetLabel)(class _CcWgtMenuItem *this, gchar *label);
	const gchar *(*GetLabel)(class _CcWgtMenuItem *this);
	void (*AddActivateListener)(GtkMenuItem* obj, CcWgtMenuItemCallBack callBackFunc, void *pDate);
} CcWgtMenuItem;

/*****************************************************************/
/**	Summary	: Function Declare									**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.02										**/
/*****************************************************************/
CcWgtMenuItem *newCcWgtMenuItem();									// New CcWgtMenuItem Object
void InitCcWgtMenuItem(CcWgtMenuItem *this, gchar *label);			// Initialize CcWgtMenuItem object
void SetCcWgtMenuItemLabel(CcWgtMenuItem *this, gchar *label);		// Set CcWgtMenuItem Label
const gchar *GetCcWgtMenuItemLabel(CcWgtMenuItem *this);			// Get CcWgtMenuItem Label
void CcWgtMenuItemAddActivateListener(GtkMenuItem* obj,
						 CcWgtMenuItemCallBack callBackFunc,
						 void *pDate);								// MenuItem Add Activate Listener

#endif	/* _MENUITEM_H_ */


