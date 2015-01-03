/*****************************************************************/
/**	File	: button.h											**/
/**	Summary	: CcWgtButton Object Define							**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.07										**/
/**			: 2015.01.02										**/
/**			: 2015.01.03										**/
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
/**	Summary	: CcWgtButton Object Define							**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.06										**/
/**			: 2014.12.07										**/
/**			: 2015.01.02										**/
/**			: 2015.01.03										**/
/*****************************************************************/
typedef class _CcWgtButton
{
	GtkWidget* obj;						// CcWgtButton Object
	
	void (*Init)(class _CcWgtButton *this, const gchar *label);
	void (*SetLabel)(class _CcWgtButton *this, const gchar *label);
	const gchar* (*GetLabel)(class _CcWgtButton *this);
	void (*SetPosition)(class _CcWgtButton *this, gint x, gint y);
	void (*SetSize)(class _CcWgtButton *this, gint width, gint height);
	void (*Show)(class _CcWgtButton *this);
	void (*AddActivateListener		)(class _CcWgtButton *this, CallBack callBackFunc, void *pDate);
	void (*AddOnClickedListener		)(class _CcWgtButton *this, CallBack callBackFunc, void *pDate);
	void (*AddMouseEnterListener	)(class _CcWgtButton *this, CallBack callBackFunc, void *pDate);
	void (*AddMouseLeaveListener	)(class _CcWgtButton *this, CallBack callBackFunc, void *pDate);
	void (*AddMousePressedListener	)(class _CcWgtButton *this, CallBack callBackFunc, void *pDate);
	void (*AddMouseReleasedListener	)(class _CcWgtButton *this, CallBack callBackFunc, void *pDate);
} CcWgtButton;

/*****************************************************************/
/**	Summary	: Function Declare									**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.07										**/
/**			: 2015.01.02										**/
/**			: 2015.01.03										**/
/*****************************************************************/
CcWgtButton *newCcWgtButton();										// New CcWgtButton Object
void InitCcWgtButton(CcWgtButton *this, const gchar *label);		// Initialize CcWgtButton object
void SetCcWgtButtonLabel(CcWgtButton *this, const gchar *label);	// Set CcWgtButton Label
const gchar *GetCcWgtButtonLabel(CcWgtButton *this);				// Get CcWgtButton Label
void SetCcWgtButtonPosition(CcWgtButton *this, gint x, gint y);		// Set CcWgtButton Position
void SetCcWgtButtonSize(CcWgtButton *this, gint width, gint height);// Set CcWgtButton Size
void CcWgtButtonShow(CcWgtButton *this);							// CcWgtButton Show

/*****************************************************************/
/**	Summary	: CcWgtButton AddEventListener Function Declare		**/
/*****************************************************************/
void CcWgtButtonAddActivateListener		(CcWgtButton *this, CallBack callBackFunc, void *pDate);	// Activate
void CcWgtButtonAddOnClickedListener	(CcWgtButton *this, CallBack callBackFunc, void *pDate);	// Mouse OnClicked
void CcWgtButtonAddMouseEnterListener	(CcWgtButton *this, CallBack callBackFunc, void *pDate);	// Mouse Enter
void CcWgtButtonAddMouseLeaveListener	(CcWgtButton *this, CallBack callBackFunc, void *pDate);	// Mouse Leave
void CcWgtButtonAddMousePressedListener	(CcWgtButton *this, CallBack callBackFunc, void *pDate);	// Mouse Pressed
void CcWgtButtonAddMouseReleasedListener(CcWgtButton *this, CallBack callBackFunc, void *pDate);	// Mouse Released

#endif	/* _BUTTON_H_ */
