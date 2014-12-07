/*****************************************************************/
/**	File	: common.c											**/
/**	Summary	: Common Define										**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.07										**/
/*****************************************************************/

/*****************************************************************/
/** include head file											**/
/*****************************************************************/
#include "common.h"

/*****************************************************************/
/**	Function: AddActivateListener								**/
/**	Summary	: Activate Event Listener Function					**/
/**	Param	: GtkWidget* obj									**/
/**			: CallBack callBackFunc								**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.07										**/
/*****************************************************************/
void AddActivateListener(GtkWidget* obj, CallBack callBackFunc, ...)
{
	va_list var_arg;

	va_start(var_arg, callBackFunc);
	
	

	g_signal_connect(G_OBJECT(obj), "activate", G_CALLBACK(callBackFunc), va_arg( var_arg, void * ));

	va_end(var_arg);
}

/*****************************************************************/
/**	Function: AddOnClickedListener								**/
/**	Summary	: Mouse OnClicked Event Listener Function			**/
/**	Param	: GtkWidget* obj									**/
/**			: CallBack callBackFunc								**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.07										**/
/*****************************************************************/
void AddOnClickedListener(GtkWidget* obj, CallBack callBackFunc)
{
	g_signal_connect(G_OBJECT(obj), "clicked", G_CALLBACK(callBackFunc), NULL);
}

/*****************************************************************/
/**	Function: AddMouseEnterListener								**/
/**	Summary	: Mouse Enter Event Listener Function				**/
/**	Param	: GtkWidget* obj									**/
/**			: CallBack callBackFunc								**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.07										**/
/*****************************************************************/
void AddMouseEnterListener(GtkWidget* obj, CallBack callBackFunc)
{
	g_signal_connect(G_OBJECT(obj), "enter", G_CALLBACK(callBackFunc), NULL);
}

/*****************************************************************/
/**	Function: AddMouseLeaveListener								**/
/**	Summary	: Mouse Leave Event Listener Function				**/
/**	Param	: GtkWidget* obj									**/
/**			: CallBack callBackFunc								**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.07										**/
/*****************************************************************/
void AddMouseLeaveListener(GtkWidget* obj, CallBack callBackFunc)
{
	g_signal_connect(G_OBJECT(obj), "leave", G_CALLBACK(callBackFunc), NULL);
}

/*****************************************************************/
/**	Function: AddMousePressedListener							**/
/**	Summary	: Mouse Pressed Event Listener Function				**/
/**	Param	: GtkWidget* obj									**/
/**			: CallBack callBackFunc								**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.07										**/
/*****************************************************************/
void AddMousePressedListener(GtkWidget* obj, CallBack callBackFunc)
{
	g_signal_connect(G_OBJECT(obj), "pressed", G_CALLBACK(callBackFunc), NULL);
}

/*****************************************************************/
/**	Function: AddMouseReleasedListener							**/
/**	Summary	: Mouse Released Event Listener Function			**/
/**	Param	: GtkWidget* obj									**/
/**			: CallBack callBackFunc								**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.07										**/
/*****************************************************************/
void AddMouseReleasedListener(GtkWidget* obj, CallBack callBackFunc)
{
	g_signal_connect(G_OBJECT(obj), "released", G_CALLBACK(callBackFunc), NULL);
}


