/*****************************************************************/
/**	File	: menu.c											**/
/**	Summary	: CcWgtMenu Object									**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.02										**/
/*****************************************************************/

/*****************************************************************/
/** include head file											**/
/*****************************************************************/
#include "menu.h"

/*****************************************************************/
/**	Function: newCcWgtMenu										**/
/**	Summary	: New CcWgtMenu Object								**/
/**	Param	: none												**/
/**	Return	: pointer of CcWgtMenu								**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.02										**/
/*****************************************************************/
CcWgtMenu *newCcWgtMenu()
{
	CcWgtMenu *ccWgtMenu = (CcWgtMenu *)malloc(sizeof(CcWgtMenu));

	if ( (CcWgtMenu *)NULL == ccWgtMenu )
	{
		DEBUG_LOG("new CcWgtMenu error");
		exit(1);
	}

	ccWgtMenu->Init				= InitCcWgtMenu;
	ccWgtMenu->PrependItem		= CcWgtMenuPrependItem;
	ccWgtMenu->AppendItem		= CcWgtMenuAppendItem;

	return ccWgtMenu;
}

/*****************************************************************/
/**	Function: InitCcWgtMenu										**/
/**	Summary	: Initialize CcWgtMenu object						**/
/**	Param	: CcWgtMenu *this									**/
/**			: gchar *label										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.02										**/
/*****************************************************************/
void InitCcWgtMenu(CcWgtMenu *this)
{
	this->obj = gtk_menu_new();
}

/*****************************************************************/
/**	Function: CcWgtMenuPrependItem								**/
/**	Summary	: CcWgtMenu Prepend Item							**/
/**	Param	: CcWgtMenu *this									**/
/**			: CcWgtMenuItem *menuitem							**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.02										**/
/*****************************************************************/
void CcWgtMenuPrependItem(CcWgtMenu *this, CcWgtMenuItem *menuitem)
{
	gtk_menu_prepend(GTK_MENU(this->obj), menuitem->obj);
}

/*****************************************************************/
/**	Function: CcWgtMenuAppendItem								**/
/**	Summary	: CcWgtMenu Append Item								**/
/**	Param	: CcWgtMenu *this									**/
/**			: CcWgtMenuItem *menuitem							**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.02										**/
/*****************************************************************/
void CcWgtMenuAppendItem(CcWgtMenu *this, CcWgtMenuItem *menuitem)
{
	gtk_menu_append(GTK_MENU(this->obj), menuitem->obj);
}
