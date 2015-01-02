/*****************************************************************/
/**	File	: button.c											**/
/**	Summary	: CcWgtButton Object								**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.07										**/
/**			: 2015.01.02										**/
/*****************************************************************/

/*****************************************************************/
/** include head file											**/
/*****************************************************************/
#include "button.h"

/*****************************************************************/
/**	Function: newCcWgtButton									**/
/**	Summary	: New CcWgtButton Object							**/
/**	Param	: none												**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.06										**/
/**			: 2015.01.02										**/
/*****************************************************************/
CcWgtButton *newCcWgtButton()
{
	CcWgtButton *ccWgtButton = (CcWgtButton *)malloc(sizeof(CcWgtButton));

	if ( (CcWgtButton *)NULL == ccWgtButton )
	{
		DEBUG_LOG("new CcWgtButton error");
		exit(1);
	}

	ccWgtButton->Init						= InitCcWgtButton;
	ccWgtButton->SetLabel					= SetCcWgtButtonLabel;
	ccWgtButton->GetLabel					= GetCcWgtButtonLabel;
	ccWgtButton->Show						= CcWgtButtonShow;
	ccWgtButton->AddActivateListener		= CcWgtButtonAddActivateListener;
	ccWgtButton->AddOnClickedListener		= CcWgtButtonAddOnClickedListener;
	ccWgtButton->AddMouseEnterListener		= CcWgtButtonAddMouseEnterListener;
	ccWgtButton->AddMouseLeaveListener		= CcWgtButtonAddMouseLeaveListener;
	ccWgtButton->AddMousePressedListener	= CcWgtButtonAddMousePressedListener;
	ccWgtButton->AddMouseReleasedListener	= CcWgtButtonAddMouseReleasedListener;

	return ccWgtButton;
}


/*****************************************************************/
/**	Function: InitCcWgtButton									**/
/**	Summary	: Initialize CcWgtButton object						**/
/**	Param	: CcWgtButton *this									**/
/**			: gchar *label										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.06										**/
/**			: 2014.12.07										**/
/**			: 2015.01.02										**/
/*****************************************************************/
void InitCcWgtButton(CcWgtButton *this, gchar *label)
{
	this->obj = gtk_button_new_with_label(g_locale_to_utf8(label, -1, NULL, NULL, NULL));
}

/*****************************************************************/
/**	Function: SetCcWgtButtonLabel								**/
/**	Summary	: Set CcWgtButton Label								**/
/**	Param	: CcWgtButton *this									**/
/**			: gchar *label										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.07										**/
/**			: 2015.01.02										**/
/*****************************************************************/
void SetCcWgtButtonLabel(CcWgtButton *this, gchar *label)
{
	gtk_button_set_label(GTK_BUTTON(this->obj), label);
}

/*****************************************************************/
/**	Function: GetCcWgtButtonLabel								**/
/**	Summary	: Get CcWgtButton Label								**/
/**	Param	: CcWgtButton *this									**/
/**	Return	: CcWgtButton Label									**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.07										**/
/**			: 2015.01.02										**/
/*****************************************************************/
const gchar *GetCcWgtButtonLabel(CcWgtButton *this)
{
	return gtk_button_get_label(GTK_BUTTON(this->obj));
}

/*****************************************************************/
/**	Function: CcWgtButtonShow									**/
/**	Summary	: CcWgtButton Show									**/
/**	Param	: CcWgtButton *this									**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.02										**/
/*****************************************************************/
void CcWgtButtonShow(CcWgtButton *this)
{
	gtk_widget_show(this->obj);
}

/*****************************************************************/
/**	Function: CcWgtButtonAddActivateListener					**/
/**	Summary	: CcWgtButton Activate Event Listener Function		**/
/**	Param	: CcWgtButton *this									**/
/**			: CallBack callBackFunc								**/
/**			: void *pDate										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.07										**/
/**			: 2015.01.02										**/
/*****************************************************************/
void CcWgtButtonAddActivateListener(CcWgtButton *this, CallBack callBackFunc, void *pDate)
{
	g_signal_connect(G_OBJECT(this->obj), "activate", G_CALLBACK(callBackFunc), pDate);
}

/*****************************************************************/
/**	Function: CcWgtButtonAddOnClickedListener					**/
/**	Summary	:CcWgtButton Mouse OnClicked Event Listener Function**/
/**	Param	: CcWgtButton *this									**/
/**			: CallBack callBackFunc								**/
/**			: void *pDate										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.07										**/
/**			: 2015.01.02										**/
/*****************************************************************/
void CcWgtButtonAddOnClickedListener(CcWgtButton *this, CallBack callBackFunc, void *pDate)
{
	g_signal_connect(G_OBJECT(this->obj), "clicked", G_CALLBACK(callBackFunc), pDate);
}

/*****************************************************************/
/**	Function: CcWgtButtonAddMouseEnterListener					**/
/**	Summary	: CcWgtButton Mouse Enter Event Listener Function	**/
/**	Param	: CcWgtButton *this									**/
/**			: CallBack callBackFunc								**/
/**			: void *pDate										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.07										**/
/**			: 2015.01.02										**/
/*****************************************************************/
void CcWgtButtonAddMouseEnterListener(CcWgtButton *this, CallBack callBackFunc, void *pDate)
{
	g_signal_connect(G_OBJECT(this->obj), "enter", G_CALLBACK(callBackFunc), pDate);
}

/*****************************************************************/
/**	Function: CcWgtButtonAddMouseLeaveListener					**/
/**	Summary	: CcWgtButton Mouse Leave Event Listener Function	**/
/**	Param	: CcWgtButton *this									**/
/**			: CallBack callBackFunc								**/
/**			: void *pDate										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.07										**/
/**			: 2015.01.02										**/
/*****************************************************************/
void CcWgtButtonAddMouseLeaveListener(CcWgtButton *this, CallBack callBackFunc, void *pDate)
{
	g_signal_connect(G_OBJECT(this->obj), "leave", G_CALLBACK(callBackFunc), pDate);
}

/*****************************************************************/
/**	Function: CcWgtButtonAddMousePressedListener				**/
/**	Summary	: CcWgtButton Mouse Pressed Event Listener Function	**/
/**	Param	: CcWgtButton *this									**/
/**			: CallBack callBackFunc								**/
/**			: void *pDate										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.07										**/
/**			: 2015.01.02										**/
/*****************************************************************/
void CcWgtButtonAddMousePressedListener(CcWgtButton *this, CallBack callBackFunc, void *pDate)
{
	g_signal_connect(G_OBJECT(this->obj), "pressed", G_CALLBACK(callBackFunc), pDate);
}

/*****************************************************************/
/**	Function: CcWgtButtonAddMouseReleasedListener				**/
/**	Summary	: CcWgtButton Mouse Released Event Listener Function**/
/**	Param	: CcWgtButton *this									**/
/**			: CallBack callBackFunc								**/
/**			: void *pDate										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.07										**/
/**			: 2015.01.02										**/
/*****************************************************************/
void CcWgtButtonAddMouseReleasedListener(CcWgtButton *this, CallBack callBackFunc, void *pDate)
{
	g_signal_connect(G_OBJECT(this->obj), "released", G_CALLBACK(callBackFunc), pDate);
}


