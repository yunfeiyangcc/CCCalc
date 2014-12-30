/*****************************************************************/
/**	File	: button.h											**/
/**	Summary	: Button Object	Define								**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.07										**/
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
/**	Object  : Button 											**/
/**	Summary	: Button Object	Define								**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.06										**/
/**			: 2014.12.07										**/
/*****************************************************************/
typedef class _Button
{
	GtkWidget* obj;						// Button Object
	
	void (*Init)(class _Button *this, gchar *label);
	void (*setLabel)(class _Button *this, gchar *label);
	const gchar* (*getLabel)(class _Button *this);
	void (*AddActivateListener		)	(GtkWidget* obj, CallBack callBackFunc, void *pDate);	// Activate Function pointer
	void (*AddOnClickedListener		)	(GtkWidget* obj, CallBack callBackFunc, void *pDate);	// Mouse OnClicked Function pointer
	void (*AddMouseEnterListener	)	(GtkWidget* obj, CallBack callBackFunc, void *pDate);	// Mouse Enter Function pointer
	void (*AddMouseLeaveListener	)	(GtkWidget* obj, CallBack callBackFunc, void *pDate);	// Mouse Leave Function pointer
	void (*AddMousePressedListener	)	(GtkWidget* obj, CallBack callBackFunc, void *pDate);	// Mouse Pressed Function pointer
	void (*AddMouseReleasedListener	)	(GtkWidget* obj, CallBack callBackFunc, void *pDate);	// Mouse Released Function pointer
} Button;

/*****************************************************************/
/**	Summary	: Function Declare									**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.07										**/
/*****************************************************************/
Button *newButton();										// New Button Object
void InitButton(Button *this, gchar *label);				// Initialize Button object
void setButtonLabel(Button *this, gchar *label);			// Set Button Label
const gchar *getButtonLabel(Button *this);					// Get Button Label

/*****************************************************************/
/**	Summary	: Button AddEventListener Function Declare			**/
/*****************************************************************/
void AddActivateListener		(GtkWidget* obj, CallBack callBackFunc, void *pDate);		// Activate
void AddOnClickedListener		(GtkWidget* obj, CallBack callBackFunc, void *pDate);		// Mouse OnClicked
void AddMouseEnterListener		(GtkWidget* obj, CallBack callBackFunc, void *pDate);		// Mouse Enter
void AddMouseLeaveListener		(GtkWidget* obj, CallBack callBackFunc, void *pDate);		// Mouse Leave
void AddMousePressedListener	(GtkWidget* obj, CallBack callBackFunc, void *pDate);		// Mouse Pressed
void AddMouseReleasedListener	(GtkWidget* obj, CallBack callBackFunc, void *pDate);		// Mouse Released



#endif	/* _BUTTON_H_ */


