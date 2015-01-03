/*****************************************************************/
/**	File	: menuitem.h										**/
/**	Summary	: CcWgtMenuItem Object Define						**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.02										**/
/**			: 2015.01.03										**/
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
/**			: 2015.01.03										**/
/*****************************************************************/
typedef class _CcWgtMenuItem
{
	GtkWidget* obj;						// CcWgtMenuItem Object

	void (*Init)(class _CcWgtMenuItem *this, const gchar *label);
	void (*SetLabel)(class _CcWgtMenuItem *this, const gchar *label);
	const gchar *(*GetLabel)(class _CcWgtMenuItem *this);
	void (*AddActivateListener)(class _CcWgtMenuItem *this, CallBack callBackFunc, void *pDate);
} CcWgtMenuItem;

/*****************************************************************/
/**	Summary	: Function Declare									**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.02										**/
/**			: 2015.01.03										**/
/*****************************************************************/
CcWgtMenuItem *newCcWgtMenuItem();									// New CcWgtMenuItem Object
void InitCcWgtMenuItem(CcWgtMenuItem *this, const gchar *label);	// Initialize CcWgtMenuItem object
void SetCcWgtMenuItemLabel(CcWgtMenuItem *this, const gchar *label);// Set CcWgtMenuItem Label
const gchar *GetCcWgtMenuItemLabel(CcWgtMenuItem *this);			// Get CcWgtMenuItem Label
void CcWgtMenuItemAddActivateListener(CcWgtMenuItem *this,
						 CallBack callBackFunc,
						 void *pDate);								// MenuItem Add Activate Listener

#endif	/* _MENUITEM_H_ */


