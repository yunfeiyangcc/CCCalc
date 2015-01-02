/*****************************************************************/
/**	File	: menubar.c											**/
/**	Summary	: MenuBar Object									**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.01										**/
/*****************************************************************/

/*****************************************************************/
/** include head file											**/
/*****************************************************************/
#include "menubar.h"


/*****************************************************************/
/**	Function: newMenuBar										**/
/**	Summary	: New MenuBar Object								**/
/**	Param	: none												**/
/**	Return	: pointer of MenuBar								**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.01										**/
/*****************************************************************/
MenuBar *newMenuBar()
{
	MenuBar *menubar = (MenuBar *)malloc(sizeof(MenuBar));

	if ( (MenuBar *)NULL == menubar )
	{
		DEBUG_LOG("new MenuBar error");
		exit(1);
	}

	menubar->Init				= InitMenuBar;
	menubar->PrependRootMenu	= MenuBarPrependRootMenu;
	menubar->AppendRootMenu		= MenuBarAppendRootMenu;

	return menubar;
}

/*****************************************************************/
/**	Function: InitMenuBar										**/
/**	Summary	: Initialize MenuBar object							**/
/**	Param	: MenuBar *this										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.01										**/
/*****************************************************************/
void InitMenuBar(MenuBar *this)
{
	this->obj = gtk_menu_bar_new();
}

/*****************************************************************/
/**	Function: MenuBarPrependRootMenu							**/
/**	Summary	: MenuBar Prepend RootMenu to before				**/
/**	Param	: MenuBar *this										**/
/**			: RootMenu *rootmenu								**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.01										**/
/*****************************************************************/
void MenuBarPrependRootMenu(MenuBar *this, RootMenu *rootmenu)
{
	gtk_menu_bar_prepend(GTK_MENU_BAR(this->obj),rootmenu->rootObj->obj);
}

/*****************************************************************/
/**	Function: MenuBarPrependRootMenu							**/
/**	Summary	: MenuBar Append RootMenu to after					**/
/**	Param	: MenuBar *this										**/
/**			: RootMenu *rootmenu								**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.01										**/
/*****************************************************************/
void MenuBarAppendRootMenu(MenuBar *this, RootMenu *rootmenu)
{
	gtk_menu_bar_append(GTK_MENU_BAR(this->obj),rootmenu->rootObj->obj);
}

