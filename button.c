/*****************************************************************/
/**	Function: new Button										**/
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
/**	Function: Button init										**/
/**	Param	: struct _Button *this								**/
/**			: gchar *label										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.06										**/
/**			: 2014.12.07										**/
/*****************************************************************/
void InitButton(struct _Button *this, gchar *label)
{
	this->obj = gtk_button_new_with_label(g_locale_to_utf8(label, -1, NULL, NULL, NULL));
}

/*****************************************************************/
/**	Function: Button Set Label									**/
/**	Param	: struct _Button *this								**/
/**			: gchar *label										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.07										**/
/*****************************************************************/
void setButtonLabel(struct _Button *this, gchar *label)
{
	gtk_button_set_label(this->obj, label);
}

/*****************************************************************/
/**	Function: Button Get Label									**/
/**	Param	: struct _Button *this								**/
/**	Return	: Button Label										**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.07										**/
/*****************************************************************/
const gchar *getButtonLabel(struct _Button *this)
{
	return gtk_button_get_label(this->obj);
}

/*****************************************************************/
/**	Function: Button AddEventListener							**/
/**	Param	: GtkWidget* obj									**/
/**			: Gcallback callBackFunc							**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.06										**/
/*****************************************************************/
void AddEventListener(GtkWidget* obj, Gcallback callBackFunc)
{

}

