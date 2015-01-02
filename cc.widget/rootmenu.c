/*****************************************************************/
/**	File	: rootmenu.c										**/
/**	Summary	: CcWgtRootMenu Object								**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.01										**/
/**			: 2015.01.02										**/
/*****************************************************************/

/*****************************************************************/
/** include head file											**/
/*****************************************************************/
#include "rootmenu.h"

/*****************************************************************/
/**	Function: newCcWgtRootMenu									**/
/**	Summary	: New CcWgtRootMenu Object							**/
/**	Param	: none												**/
/**	Return	: pointer of CcWgtRootMenu							**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.01										**/
/**			: 2015.01.02										**/
/*****************************************************************/
CcWgtRootMenu *newCcWgtRootMenu()
{
	CcWgtRootMenu *ccWgtRootmenu = (CcWgtRootMenu *)malloc(sizeof(CcWgtRootMenu));

	if ( (CcWgtRootMenu *)NULL == ccWgtRootmenu )
	{
		DEBUG_LOG("new CcWgtRootMenu error");
		exit(1);
	}

	ccWgtRootmenu->rootObj = (CcWgtMenuItem *)malloc(sizeof(CcWgtMenuItem));
	if ( (CcWgtMenuItem *)NULL == ccWgtRootmenu->rootObj )
	{
		DEBUG_LOG("new rootObj of CcWgtRootMenu error");
		exit(1);
	}

	ccWgtRootmenu->menu = (CcWgtMenu *)malloc(sizeof(CcWgtMenu));
	if ( (CcWgtMenu *)NULL == ccWgtRootmenu->menu)
	{
		DEBUG_LOG("new menu of CcWgtRootMenu error");
		exit(1);
	}

	ccWgtRootmenu->Init				= InitCcWgtRootMenu;
	ccWgtRootmenu->SetLabel			= SetCcWgtRootMenuLabel;
	ccWgtRootmenu->GetLabel			= GetCcWgtRootMenuLabel;
	ccWgtRootmenu->PrependItem		= CcWgtRootMenuPrependItem;
	ccWgtRootmenu->AppendItem		= CcWgtRootMenuAppendItem;

	return ccWgtRootmenu;
}

/*****************************************************************/
/**	Function: InitCcWgtRootMenu									**/
/**	Summary	: Initialize CcWgtRootMenu object					**/
/**	Param	: CcWgtRootMenu *this								**/
/**			: gchar *label										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.01										**/
/**			: 2015.01.02										**/
/*****************************************************************/
void InitCcWgtRootMenu(CcWgtRootMenu *this, gchar *label)
{
	this->rootObj->Init(this->rootObj, label);
	this->menu->Init(this->menu);
	gtk_menu_item_set_submenu(GTK_MENU_ITEM(this->rootObj), this->menu->obj);
}

/*****************************************************************/
/**	Function: SetCcWgtRootMenuLabel								**/
/**	Summary	: Set CcWgtRootMenu Label							**/
/**	Param	: CcWgtRootMenu *this								**/
/**			: gchar *label										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.01										**/
/**			: 2015.01.02										**/
/*****************************************************************/
void SetCcWgtRootMenuLabel(CcWgtRootMenu *this, gchar *label)
{
	this->rootObj->SetLabel(this->rootObj, label);
}

/*****************************************************************/
/**	Function: GetCcWgtRootMenuLabel								**/
/**	Summary	: Get CcWgtRootMenu Label							**/
/**	Param	: CcWgtRootMenu *this								**/
/**	Return	: CcWgtRootMenu Label								**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.01										**/
/**			: 2015.01.02										**/
/*****************************************************************/
const gchar *GetCcWgtRootMenuLabel(CcWgtRootMenu *this)
{
	return this->rootObj->GetLabel(this->rootObj);
}

/*****************************************************************/
/**	Function: CcWgtRootMenuPrependItem							**/
/**	Summary	: CcWgtRootMenu Append Item to before				**/
/**	Param	: CcWgtRootMenu *this								**/
/**			: MenuItem *menuitem								**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.01										**/
/**			: 2015.01.02										**/
/*****************************************************************/
void CcWgtRootMenuPrependItem(CcWgtRootMenu *this, CcWgtMenuItem *menuitem)
{
	this->menu->PrependItem(this->menu, menuitem);
}

/*****************************************************************/
/**	Function: CcWgtRootMenuAppendItem							**/
/**	Summary	: CcWgtRootMenu Append Item to after				**/
/**	Param	: CcWgtRootMenu *this								**/
/**			: MenuItem *menuitem								**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.01										**/
/**			: 2015.01.02										**/
/*****************************************************************/
void CcWgtRootMenuAppendItem(CcWgtRootMenu *this, CcWgtMenuItem *menuitem)
{
	this->menu->AppendItem(this->menu, menuitem);
}


