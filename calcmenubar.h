/*****************************************************************/
/**	File	: calcmenubar.h										**/
/**	Summary	: Create Calculator MenuBar							**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.02										**/
/*****************************************************************/

#ifndef	_CALCMENUBAR_H_
#define	_CALCMENUBAR_H_

/*****************************************************************/
/** include head file											**/
/*****************************************************************/
#include "cc.widget/menubar.h"
#include "cc.widget/rootmenu.h"
#include "cc.widget/menu.h"
#include "cc.widget/menuitem.h"

/*****************************************************************/
/** Define														**/
/*****************************************************************/

#define CALC_MENU_END					""				// Menu end flag

#define CALC_ROOT_MENU_MAX				(30)			// Root Menu Max
#define CALC_MENU_ITEM_MAX				(30)			// Menu Item Max

/*****************************************************************/
/** Struct Define												**/
/*****************************************************************/
//CalcMenuTable calcMenuTable[] = {
//	{ CALC_ROOT_MENU_CALC, "计算器", CALC_ROOT_MENU_CALC_ITEM_QUIT, "退出" },
//};

typedef struct _CalcMenuItemTable
{
	const char *menuItemName;
}CalcMenuItemTable;

typedef struct _CalcRootMenuTable
{
	const char *rootMenuName;
	CalcMenuItemTable menuItemTable[CALC_MENU_ITEM_MAX];
}CalcRootMenuTable;

static CalcRootMenuTable menuTable[] = {
	{	"计算器",		{	"复制",
							"粘贴",
							"退出",
							CALC_MENU_END	}	},

	{	"模式",			{	"基本",
							"高级",
							"编程",
							CALC_MENU_END	}	},

	{	"帮助",			{	"内容",
							"关于",
							CALC_MENU_END	}	},

	{	CALC_MENU_END,	{	CALC_MENU_END	}	}
};



/*****************************************************************/
/** Global Variables											**/
/*****************************************************************/
/* Calculator Menu */
CcWgtMenuBar *calcMenuBar;
CcWgtRootMenu *calcRootMenuCalc[CALC_ROOT_MENU_MAX];
CcWgtMenuItem *calcMenuItemCalc[CALC_MENU_ITEM_MAX];

/*****************************************************************/
/**	Summary	: Function Declare									**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.02										**/
/*****************************************************************/
void CalcMenuBarInit();
void CalcMenuBarShow();
void CalcMenuBarDestroy();

#endif	/* _CALCMENUBAR_H_ */

