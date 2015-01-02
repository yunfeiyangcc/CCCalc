/*****************************************************************/
/**	File	: menu.c											**/
/**	Summary	: Menu Object										**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/*****************************************************************/

/*****************************************************************/
/** include head file											**/
/*****************************************************************/
#include "menu.h"

/*****************************************************************/
/**	Function: newMenu											**/
/**	Summary	: New Menu Object									**/
/**	Param	: none												**/
/**	Return	: pointer of Menu									**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/*****************************************************************/
Menu *newMenu()
{
	Menu *menu = (Menu *)malloc(sizeof(Menu));

	if ( (Menu *)NULL == menu )
	{
		DEBUG_LOG("new Menu error");
		exit(1);
	}

	menu->Init				= InitMenu;
	menu->PrependItem		= MenuPrependItem;
	menu->AppendItem		= MenuAppendItem;

	return menu;
}

/*****************************************************************/
/**	Function: InitMenu											**/
/**	Summary	: Initialize Menu object							**/
/**	Param	: Menu *this										**/
/**			: gchar *label										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/*****************************************************************/
void InitMenu(Menu *this)
{
	this->obj = gtk_menu_new();
}

/*****************************************************************/
/**	Function: MenuPrependItem									**/
/**	Summary	: Menu Prepend Item									**/
/**	Param	: Menu *this										**/
/**			: MenuItem *menuitem								**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/*****************************************************************/
void MenuPrependItem(Menu *this, MenuItem *menuitem)
{
	gtk_menu_prepend(GTK_MENU(this->obj), menuitem->obj);
}

/*****************************************************************/
/**	Function: MenuAppendItem									**/
/**	Summary	: Menu Append Item									**/
/**	Param	: Menu *this										**/
/**			: MenuItem *menuitem								**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/*****************************************************************/
void MenuAppendItem(Menu *this, MenuItem *menuitem)
{
	gtk_menu_append(GTK_MENU(this->obj), menuitem->obj);
}
