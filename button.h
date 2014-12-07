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
/** ∫Í∂®“Â														**/
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
	void (*AddActivateListener)(GtkWidget* obj, CallBack callBackFunc);
	void (*AddOnClickedListener)(GtkWidget* obj, CallBack callBackFunc);
	void (*AddMouseEnterListener)(GtkWidget* obj, CallBack callBackFunc);
	void (*AddMouseLeaveListener)(GtkWidget* obj, CallBack callBackFunc);
	void (*AddMousePressedListener)(GtkWidget* obj, CallBack callBackFunc);
	void (*AddMouseReleasedListener)(GtkWidget* obj, CallBack callBackFunc);
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

#endif	/*	_BUTTON_H_	*/


