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

	button->Init = InitButton;
	button->AddEventListener = AddEventListener;

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
	gtk_button_set_label(this->obj, label);
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
	return gtk_button_get_label(this->obj);
}

/*****************************************************************/
/**	Function: AddEventListener									**/
/**	Summary	: Button AddEventListener							**/
/**	Param	: GtkWidget* obj									**/
/**			: Gcallback callBackFunc							**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.06										**/
/*****************************************************************/
void AddEventListener(GtkWidget* obj, Gcallback callBackFunc)
{

}

