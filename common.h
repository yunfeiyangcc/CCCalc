/*****************************************************************/
/**	File	: common.h											**/
/**	Summary	: Common Define										**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.07										**/
/*****************************************************************/

#ifndef	_COMMON_H_
#define	_COMMON_H_

/*****************************************************************/
/** ∫Í∂®“Â														**/
/*****************************************************************/
#define DEBUG_LOG(str) printf(str " file:%s, line:%d\n", __FILE__, __LINE__)

#define class struct
#define new 
#define Button() newButton()


/*****************************************************************/
/**	Summary	: CallBack Function Declare							**/
/*****************************************************************/
typedef void (*CallBack)(GtkWidget *widget, gpointer func_data);

/*****************************************************************/
/**	Summary	: AddEventListener Function Declare					**/
/*****************************************************************/
void AddActivateListener(GtkWidget* obj, CallBack callBackFunc);		// Activate
void AddOnClickedListener(GtkWidget* obj, CallBack callBackFunc);		// Mouse OnClicked
void AddMouseEnterListener(GtkWidget* obj, CallBack callBackFunc);		// Mouse Enter
void AddMouseLeaveListener(GtkWidget* obj, CallBack callBackFunc);		// Mouse Leave
void AddMousePressedListener(GtkWidget* obj, CallBack callBackFunc);	// Mouse Pressed
void AddMouseReleasedListener(GtkWidget* obj, CallBack callBackFunc);	// Mouse Released


#endif	/*	_COMMON_H_	*/

