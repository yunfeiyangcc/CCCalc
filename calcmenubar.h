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
#define CALC_ROOT_MENU_CALC				(0x00010000)
#define CALC_ROOT_MENU_CALC_COPY		((CALC_ROOT_MENU_CALC) | (0x00000001))
#define CALC_ROOT_MENU_CALC_PASTE		((CALC_ROOT_MENU_CALC) | (0x00000002))
#define CALC_ROOT_MENU_CALC_QUIT		((CALC_ROOT_MENU_CALC) | (0x00000003))

#define CALC_ROOT_MENU_MODE				(0x00020000)
#define CALC_ROOT_MENU_MODE_BASIC		((CALC_ROOT_MENU_MODE) | (0x00000001))
#define CALC_ROOT_MENU_MODE_SENIOR		((CALC_ROOT_MENU_MODE) | (0x00000002))
#define CALC_ROOT_MENU_MODE_PROGRAM		((CALC_ROOT_MENU_MODE) | (0x00000003))

#define CALC_ROOT_MENU_HELP				(0x00030000)
#define CALC_ROOT_MENU_HELP_CONTENT		((CALC_ROOT_MENU_HELP) | (0x00000001))
#define CALC_ROOT_MENU_HELP_ABOUT		((CALC_ROOT_MENU_HELP) | (0x00000002))

#define CALC_MENU_END_IDX				(-1)			// Menu end index
#define CALC_MENU_END_NAME				""				// Menu end flag

#define CALC_MENU_ITEM_MAX				(30)			// Menu Item Max
/*****************************************************************/
/** Struct Define												**/
/*****************************************************************/
typedef struct _CalcMenuItemTable
{
	int menuItemIdx;
	const char *menuItemName;
}CalcMenuItemTable;

typedef struct _CalcRootMenuTable
{
	int rootMenuIdx;
	const char *rootMenuName;
	CalcMenuItemTable menuItemTable[CALC_MENU_ITEM_MAX];
}CalcRootMenuTable;

static CalcRootMenuTable menuTable[] = {
	{	CALC_ROOT_MENU_CALC,		"计算器",
		{
			{	CALC_ROOT_MENU_CALC_COPY,		"复制",				},
			{	CALC_ROOT_MENU_CALC_PASTE,		"粘贴",				},
			{	CALC_ROOT_MENU_CALC_QUIT,		"退出",				},
			{	CALC_MENU_END_IDX,				CALC_MENU_END_NAME	}
		}
	},

	{	CALC_ROOT_MENU_MODE,	"模式",
		{
			{	CALC_ROOT_MENU_MODE_BASIC,		"基本",				},
			{	CALC_ROOT_MENU_MODE_SENIOR,		"高级",				},
			{	CALC_ROOT_MENU_MODE_PROGRAM,	"编程",				},
			{	CALC_MENU_END_IDX,				CALC_MENU_END_NAME	}
		}
	},

	{	CALC_ROOT_MENU_HELP,	"帮助",
		{
			{	CALC_ROOT_MENU_HELP_CONTENT,	"内容",				},
			{	CALC_ROOT_MENU_HELP_ABOUT,		"关于",				},
			{	CALC_MENU_END_IDX,				CALC_MENU_END_NAME	}
		}
	},

	{	CALC_MENU_END_IDX,		CALC_MENU_END_NAME,
		{
			{	CALC_MENU_END_IDX,				CALC_MENU_END_NAME	}
		}
	}
};



/*****************************************************************/
/** Global Variables											**/
/*****************************************************************/
/* Calculator Menu */
CcWgtMenuBar *calcMenuBar;

/*****************************************************************/
/**	Summary	: Function Declare									**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.02										**/
/*****************************************************************/
void CalcMenuBarInit();
void CalcMenuBarShow();
void CalcMenuBarDestroy();

void CalcMenuItemHandle(GtkWidget *widget, void *pData);

#endif	/* _CALCMENUBAR_H_ */

