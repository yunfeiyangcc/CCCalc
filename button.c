/*****************************************************************/
/**	File	: button.c											**/
/**	Summary	: Button Object										**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.07										**/
/*****************************************************************/

/*****************************************************************/
/** include head file											**/
/*****************************************************************/
#include "button.h"

/*****************************************************************/
/**	Function: newButton											**/
/**	Summary	: New Button Object									**/
/**	Param	: none												**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.06										**/
/*****************************************************************/
Button *newButton()
{
	Button *button = (Button *)malloc(sizeof(Button));

	if ( (Button *)NULL == button )
	{
		DEBUG_LOG("new Button error");
		exit(1);
	}

	button->Init						= InitButton;
	button->setLabel					= setButtonLabel;
	button->getLabel					= getButtonLabel;
	button->AddActivateListener			= AddActivateListener;
	button->AddOnClickedListener		= AddOnClickedListener;
	button->AddMouseEnterListener		= AddMouseEnterListener;
	button->AddMouseLeaveListener		= AddMouseLeaveListener;
	button->AddMousePressedListener		= AddMousePressedListener;
	button->AddMouseReleasedListener	= AddMouseReleasedListener;

	return button;
}


/*****************************************************************/
/**	Function: InitButton										**/
/**	Summary	: Initialize Button object							**/
/**	Param	: Button *this										**/
/**			: gchar *label										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.06										**/
/**			: 2014.12.07										**/
/*****************************************************************/
void InitButton(Button *this, gchar *label)
{
	this->obj = gtk_button_new_with_label(g_locale_to_utf8(label, -1, NULL, NULL, NULL));
}

/*****************************************************************/
/**	Function: setButtonLabel									**/
/**	Summary	: Set Button Label									**/
/**	Param	: Button *this										**/
/**			: gchar *label										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.07										**/
/*****************************************************************/
void setButtonLabel(Button *this, gchar *label)
{
	gtk_button_set_label(GTK_BUTTON(this->obj), label);
}

/*****************************************************************/
/**	Function: getButtonLabel									**/
/**	Summary	: Get Button Label									**/
/**	Param	: Button *this										**/
/**	Return	: Button Label										**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.07										**/
/*****************************************************************/
const gchar *getButtonLabel(Button *this)
{
	return gtk_button_get_label(GTK_BUTTON(this->obj));
}

/*****************************************************************/
/**	Function: AddActivateListener								**/
/**	Summary	: Activate Event Listener Function					**/
/**	Param	: GtkWidget* obj									**/
/**			: CallBack callBackFunc								**/
/**			: void *pDate										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.07										**/
/*****************************************************************/
void AddActivateListener(GtkWidget* obj, CallBack callBackFunc, void *pDate)
{
	g_signal_connect(G_OBJECT(obj), "activate", G_CALLBACK(callBackFunc), pDate);
}

/*****************************************************************/
/**	Function: AddOnClickedListener								**/
/**	Summary	: Mouse OnClicked Event Listener Function			**/
/**	Param	: GtkWidget* obj									**/
/**			: CallBack callBackFunc								**/
/**			: void *pDate										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.07										**/
/*****************************************************************/
void AddOnClickedListener(GtkWidget* obj, CallBack callBackFunc, void *pDate)
{
	g_signal_connect(G_OBJECT(obj), "clicked", G_CALLBACK(callBackFunc), pDate);
}

/*****************************************************************/
/**	Function: AddMouseEnterListener								**/
/**	Summary	: Mouse Enter Event Listener Function				**/
/**	Param	: GtkWidget* obj									**/
/**			: CallBack callBackFunc								**/
/**			: void *pDate										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.07										**/
/*****************************************************************/
void AddMouseEnterListener(GtkWidget* obj, CallBack callBackFunc, void *pDate)
{
	g_signal_connect(G_OBJECT(obj), "enter", G_CALLBACK(callBackFunc), pDate);
}

/*****************************************************************/
/**	Function: AddMouseLeaveListener								**/
/**	Summary	: Mouse Leave Event Listener Function				**/
/**	Param	: GtkWidget* obj									**/
/**			: CallBack callBackFunc								**/
/**			: void *pDate										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.07										**/
/*****************************************************************/
void AddMouseLeaveListener(GtkWidget* obj, CallBack callBackFunc, void *pDate)
{
	g_signal_connect(G_OBJECT(obj), "leave", G_CALLBACK(callBackFunc), pDate);
}

/*****************************************************************/
/**	Function: AddMousePressedListener							**/
/**	Summary	: Mouse Pressed Event Listener Function				**/
/**	Param	: GtkWidget* obj									**/
/**			: CallBack callBackFunc								**/
/**			: void *pDate										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.07										**/
/*****************************************************************/
void AddMousePressedListener(GtkWidget* obj, CallBack callBackFunc, void *pDate)
{
	g_signal_connect(G_OBJECT(obj), "pressed", G_CALLBACK(callBackFunc), pDate);
}

/*****************************************************************/
/**	Function: AddMouseReleasedListener							**/
/**	Summary	: Mouse Released Event Listener Function			**/
/**	Param	: GtkWidget* obj									**/
/**			: CallBack callBackFunc								**/
/**			: void *pDate										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.07										**/
/*****************************************************************/
void AddMouseReleasedListener(GtkWidget* obj, CallBack callBackFunc, void *pDate)
{
	g_signal_connect(G_OBJECT(obj), "released", G_CALLBACK(callBackFunc), pDate);
}


