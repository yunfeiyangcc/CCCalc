/*****************************************************************/
/**	File	: button.h											**/
/**	Summary	: CcWgtButton Object	Define						**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.07										**/
/**			: 2015.01.02										**/
/*****************************************************************/

#ifndef	_BUTTON_H_
#define	_BUTTON_H_

/*****************************************************************/
/** include head file											**/
/*****************************************************************/
#include "common.h"

/*****************************************************************/
/** Define														**/
/*****************************************************************/

/*****************************************************************/
/**	Object  : CcWgtButton 										**/
/**	Summary	: CcWgtButton Object	Define						**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.06										**/
/**			: 2014.12.07										**/
/**			: 2015.01.02										**/
/*****************************************************************/
typedef class _CcWgtButton
{
	GtkWidget* obj;						// CcWgtButton Object
	
	void (*Init)(class _CcWgtButton *this, gchar *label);
	void (*setLabel)(class _CcWgtButton *this, gchar *label);
	const gchar* (*getLabel)(class _CcWgtButton *this);
	void (*AddActivateListener		)(GtkWidget* obj, CallBack callBackFunc, void *pDate);	// Activate Function pointer
	void (*AddOnClickedListener		)(GtkWidget* obj, CallBack callBackFunc, void *pDate);	// Mouse OnClicked Function pointer
	void (*AddMouseEnterListener	)(GtkWidget* obj, CallBack callBackFunc, void *pDate);	// Mouse Enter Function pointer
	void (*AddMouseLeaveListener	)(GtkWidget* obj, CallBack callBackFunc, void *pDate);	// Mouse Leave Function pointer
	void (*AddMousePressedListener	)(GtkWidget* obj, CallBack callBackFunc, void *pDate);	// Mouse Pressed Function pointer
	void (*AddMouseReleasedListener	)(GtkWidget* obj, CallBack callBackFunc, void *pDate);	// Mouse Released Function pointer
} CcWgtButton;

/*****************************************************************/
/**	Summary	: Function Declare									**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.07										**/
/**			: 2015.01.02										**/
/*****************************************************************/
CcWgtButton *newCcWgtButton();										// New CcWgtButton Object
void InitCcWgtButton(CcWgtButton *this, gchar *label);				// Initialize CcWgtButton object
void setCcWgtButtonLabel(CcWgtButton *this, gchar *label);			// Set CcWgtButton Label
const gchar *getCcWgtButtonLabel(CcWgtButton *this);				// Get CcWgtButton Label

/*****************************************************************/
/**	Summary	: CcWgtButton AddEventListener Function Declare		**/
/*****************************************************************/
void CcWgtButtonAddActivateListener		(GtkWidget* obj, CallBack callBackFunc, void *pDate);	// Activate
void CcWgtButtonAddOnClickedListener	(GtkWidget* obj, CallBack callBackFunc, void *pDate);	// Mouse OnClicked
void CcWgtButtonAddMouseEnterListener	(GtkWidget* obj, CallBack callBackFunc, void *pDate);	// Mouse Enter
void CcWgtButtonAddMouseLeaveListener	(GtkWidget* obj, CallBack callBackFunc, void *pDate);	// Mouse Leave
void CcWgtButtonAddMousePressedListener	(GtkWidget* obj, CallBack callBackFunc, void *pDate);	// Mouse Pressed
void CcWgtButtonAddMouseReleasedListener(GtkWidget* obj, CallBack callBackFunc, void *pDate);	// Mouse Released

#endif	/* _BUTTON_H_ */
