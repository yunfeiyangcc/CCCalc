/*****************************************************************/
/**	File	: menubar.c											**/
/**	Summary	: CcWgtMenuBar Object								**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.01										**/
/**			: 2015.01.02										**/
/*****************************************************************/

/*****************************************************************/
/** include head file											**/
/*****************************************************************/
#include "menubar.h"


/*****************************************************************/
/**	Function: newCcWgtMenuBar									**/
/**	Summary	: New CcWgtMenuBar Object							**/
/**	Param	: none												**/
/**	Return	: pointer of CcWgtMenuBar							**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.01										**/
/**			: 2015.01.02										**/
/*****************************************************************/
CcWgtMenuBar *newCcWgtMenuBar()
{
	CcWgtMenuBar *ccWgtMenubar = (CcWgtMenuBar *)malloc(sizeof(CcWgtMenuBar));

	if ( (CcWgtMenuBar *)NULL == ccWgtMenubar )
	{
		DEBUG_LOG("new CcWgtMenuBar error");
		exit(1);
	}

	ccWgtMenubar->Init				= InitCcWgtMenuBar;
	ccWgtMenubar->PrependRootMenu	= CcWgtMenuBarPrependRootMenu;
	ccWgtMenubar->AppendRootMenu		= CcWgtMenuBarAppendRootMenu;

	return ccWgtMenubar;
}

/*****************************************************************/
/**	Function: InitCcWgtMenuBar									**/
/**	Summary	: Initialize CcWgtMenuBar object					**/
/**	Param	: CcWgtMenuBar *this								**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.31										**/
/**			: 2015.01.01										**/
/**			: 2015.01.02										**/
/*****************************************************************/
void InitCcWgtMenuBar(CcWgtMenuBar *this)
{
	this->obj = gtk_menu_bar_new();
}

/*****************************************************************/
/**	Function: CcWgtMenuBarPrependRootMenu						**/
/**	Summary	: CcWgtMenuBar Prepend RootMenu to before			**/
/**	Param	: CcWgtMenuBar *this								**/
/**			: RootMenu *rootmenu								**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.01										**/
/**			: 2015.01.02										**/
/*****************************************************************/
void CcWgtMenuBarPrependRootMenu(CcWgtMenuBar *this, CcWgtRootMenu *rootmenu)
{
	gtk_menu_bar_prepend(GTK_MENU_BAR(this->obj),rootmenu->rootObj->obj);
}

/*****************************************************************/
/**	Function: CcWgtMenuBarPrependRootMenu						**/
/**	Summary	: CcWgtMenuBar Append RootMenu to after				**/
/**	Param	: CcWgtMenuBar *this								**/
/**			: RootMenu *rootmenu								**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.01										**/
/**			: 2015.01.02										**/
/*****************************************************************/
void CcWgtMenuBarAppendRootMenu(CcWgtMenuBar *this, CcWgtRootMenu *rootmenu)
{
	gtk_menu_bar_append(GTK_MENU_BAR(this->obj),rootmenu->rootObj->obj);
}

