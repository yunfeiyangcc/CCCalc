/*****************************************************************/
/**	File	: menuitem.c										**/
/**	Summary	: CcWgtMenuItem Object								**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.02										**/
/**			: 2015.01.03										**/
/*****************************************************************/

/*****************************************************************/
/** include head file											**/
/*****************************************************************/
#include "menuitem.h"

/*****************************************************************/
/**	Function: newCcWgtMenuItem									**/
/**	Summary	: New CcWgtMenuItem Object							**/
/**	Param	: none												**/
/**	Return	: pointer of CcWgtMenuItem							**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.02										**/
/*****************************************************************/
CcWgtMenuItem *newCcWgtMenuItem()
{
	CcWgtMenuItem *ccWgtMenuitem = (CcWgtMenuItem *)malloc(sizeof(CcWgtMenuItem));

	if ( (CcWgtMenuItem *)NULL == ccWgtMenuitem )
	{
		DEBUG_LOG("new CcWgtMenuItem error");
		exit(1);
	}

	ccWgtMenuitem->Init					= InitCcWgtMenuItem;
	ccWgtMenuitem->SetLabel				= SetCcWgtMenuItemLabel;
	ccWgtMenuitem->GetLabel				= GetCcWgtMenuItemLabel;
	ccWgtMenuitem->AddActivateListener	= CcWgtMenuItemAddActivateListener;

	return ccWgtMenuitem;
}

/*****************************************************************/
/**	Function: InitCcWgtMenuItem									**/
/**	Summary	: Initialize CcWgtMenuItem object					**/
/**	Param	: MenuItem *this									**/
/**			: const gchar *label								**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.02										**/
/**			: 2015.01.03										**/
/*****************************************************************/
void InitCcWgtMenuItem(CcWgtMenuItem *this, const gchar *label)
{
	if ( (const gchar *)NULL == label )
	{
		this->obj = gtk_menu_item_new();
	}
	else
	{
		this->obj = gtk_menu_item_new_with_label(label);
	}
}

/*****************************************************************/
/**	Function: SetCcWgtMenuItemLabel								**/
/**	Summary	: Set CcWgtMenuItem Label							**/
/**	Param	: CcWgtMenuItem *this								**/
/**			: const gchar *label								**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.02										**/
/**			: 2015.01.03										**/
/*****************************************************************/
void SetCcWgtMenuItemLabel(CcWgtMenuItem *this, const gchar *label)
{
	gtk_menu_item_set_label(GTK_MENU_ITEM(this->obj), label);
}

/*****************************************************************/
/**	Function: GetCcWgtMenuItemLabel								**/
/**	Summary	: Get CcWgtMenuItem Label							**/
/**	Param	: CcWgtMenuItem *this								**/
/**	Return	: CcWgtMenuItem Label								**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.02										**/
/*****************************************************************/
const gchar *GetCcWgtMenuItemLabel(CcWgtMenuItem *this)
{
	return gtk_menu_item_get_label(GTK_MENU_ITEM(this->obj));
}

/*****************************************************************/
/**	Function: CcWgtMenuItemAddActivateListener					**/
/**	Summary	: CcWgtMenuItem Activate Event Listener Function	**/
/**	Param	: CcWgtMenuItem *this								**/
/**			: CallBack callBackFunc								**/
/**			: void *pDate										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.02										**/
/**			: 2015.01.03										**/
/*****************************************************************/
void CcWgtMenuItemAddActivateListener(CcWgtMenuItem *this, CallBack callBackFunc,void *pDate)
{
	g_signal_connect(G_OBJECT(this->obj), "activate", G_CALLBACK(callBackFunc), pDate);
}

