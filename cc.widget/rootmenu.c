/*****************************************************************/
/**	File	: rootmenu.c										**/
/**	Summary	: RootMenu Object									**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.01										**/
/*****************************************************************/

/*****************************************************************/
/** include head file											**/
/*****************************************************************/
#include "rootmenu.h"

/*****************************************************************/
/**	Function: newRootMenu										**/
/**	Summary	: New RootMenu Object								**/
/**	Param	: none												**/
/**	Return	: pointer of RootMenu								**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.01										**/
/*****************************************************************/
RootMenu *newRootMenu()
{
	RootMenu *rootmenu = (RootMenu *)malloc(sizeof(RootMenu));

	if ( (RootMenu *)NULL == rootmenu )
	{
		DEBUG_LOG("new RootMenu error");
		exit(1);
	}

	rootmenu->rootObj = (MenuItem *)malloc(sizeof(MenuItem));
	if ( (MenuItem *)NULL == rootmenu->rootObj )
	{
		DEBUG_LOG("new rootObj of RootMenu error");
		exit(1);
	}

	rootmenu->menu = (Menu *)malloc(sizeof(Menu));
	if ( (Menu *)NULL == rootmenu->menu)
	{
		DEBUG_LOG("new menu of RootMenu error");
		exit(1);
	}

	rootmenu->Init				= InitRootMenu;
	rootmenu->SetLabel			= SetRootMenuLabel;
	rootmenu->GetLabel			= GetRootMenuLabel;
	rootmenu->PrependItem		= RootMenuPrependItem;
	rootmenu->AppendItem		= RootMenuAppendItem;

	return rootmenu;
}

/*****************************************************************/
/**	Function: InitRootMenu										**/
/**	Summary	: Initialize RootMenu object						**/
/**	Param	: RootMenu *this									**/
/**			: gchar *label										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.01										**/
/*****************************************************************/
void InitRootMenu(RootMenu *this, gchar *label)
{
	this->rootObj->Init(this->rootObj, label);
	this->menu->Init(this->menu);
	gtk_menu_item_set_submenu(GTK_MENU_ITEM(this->rootObj), this->menu->obj);
}

/*****************************************************************/
/**	Function: SetRootMenuLabel									**/
/**	Summary	: Set RootMenu Label								**/
/**	Param	: RootMenu *this									**/
/**			: gchar *label										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.01										**/
/*****************************************************************/
void SetRootMenuLabel(RootMenu *this, gchar *label)
{
	this->rootObj->SetLabel(this->rootObj, label);
}

/*****************************************************************/
/**	Function: GetRootMenuLabel									**/
/**	Summary	: Get RootMenu Label								**/
/**	Param	: RootMenu *this									**/
/**	Return	: RootMenu Label									**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.01										**/
/*****************************************************************/
const gchar *GetRootMenuLabel(RootMenu *this)
{
	return this->rootObj->GetLabel(this->rootObj);
}

/*****************************************************************/
/**	Function: RootMenuPrependItem								**/
/**	Summary	: RootMenu Append Item to before					**/
/**	Param	: RootMenu *this									**/
/**			: MenuItem *menuitem								**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.01										**/
/*****************************************************************/
void RootMenuPrependItem(RootMenu *this, MenuItem *menuitem)
{
	this->menu->PrependItem(this->menu, menuitem);
}

/*****************************************************************/
/**	Function: RootMenuAppendItem								**/
/**	Summary	: RootMenu Append Item to after						**/
/**	Param	: RootMenu *this									**/
/**			: MenuItem *menuitem								**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.01										**/
/*****************************************************************/
void RootMenuAppendItem(RootMenu *this, MenuItem *menuitem)
{
	this->menu->AppendItem(this->menu, menuitem);
}


