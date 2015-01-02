/*****************************************************************/
/**	File	: menuitem.c										**/
/**	Summary	: CcWgtMenuItem Object								**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.02										**/
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
		DEBUG_LOG("new MenuItem error");
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
/**			: gchar *label										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.02										**/
/*****************************************************************/
void InitCcWgtMenuItem(CcWgtMenuItem *this, gchar *label)
{
	if ( (gchar *)NULL == label )
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
/**			: gchar *label										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.02										**/
/*****************************************************************/
void SetCcWgtMenuItemLabel(CcWgtMenuItem *this, gchar *label)
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
/**	Param	: GtkMenuItem* obj									**/
/**			: CcWgtMenuItemCallBack callBackFunc				**/
/**			: void *pDate										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.02										**/
/*****************************************************************/
void CcWgtMenuItemAddActivateListener(GtkMenuItem* obj, CcWgtMenuItemCallBack callBackFunc,void *pDate)
{
	g_signal_connect(G_OBJECT(obj), "activate", G_CALLBACK(callBackFunc), pDate);
}

