/*****************************************************************/
/**	File	: calcmenubar.C										**/
/**	Summary	: Create Calculator MenuBar							**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.02										**/
/*****************************************************************/

/*****************************************************************/
/** include head file											**/
/*****************************************************************/
#include "calcmenubar.h"

/*****************************************************************/
/**	Function: CalcMenuBarInit									**/
/**	Summary	: Calculator MenuBar Init							**/
/**	Param	: none												**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.02										**/
/*****************************************************************/
void CalcMenuBarInit()
{
	/* Variable Initialize */
	int i = 0;
	int j = 0;
	CcWgtRootMenu *calcRootMenu = NULL;
	CcWgtMenuItem *calcMenuItem = NULL;

	/* Create Calculator Menu */
	calcMenuBar = new CcWgtMenuBar();
	calcMenuBar->Init(calcMenuBar);

	for (i = 0; CALC_MENU_END_IDX != menuTable[i].rootMenuIdx; i++)
	{
		calcRootMenu = new CcWgtRootMenu();
		calcRootMenu->Init(calcRootMenu, menuTable[i].rootMenuName);

		for (j = 0; CALC_MENU_END_IDX != menuTable[i].menuItemTable[j].menuItemIdx; j++)
		{
			calcMenuItem = new CcWgtMenuItem();
			calcMenuItem->Init(calcMenuItem, menuTable[i].menuItemTable[j].menuItemName);
			calcMenuItem->AddActivateListener(calcMenuItem, CalcMenuItemHandle, (void *)(menuTable[i].menuItemTable[j].menuItemIdx));
			calcRootMenu->AppendItem(calcRootMenu, calcMenuItem);
		}
		calcMenuBar->AppendRootMenu(calcMenuBar, calcRootMenu);
	}
}

/*****************************************************************/
/**	Function: CalcMenuBarShow									**/
/**	Summary	: Calculator MenuBar Show							**/
/**	Param	: none												**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.02										**/
/*****************************************************************/
void CalcMenuBarShow()
{
	calcMenuBar->Show(calcMenuBar);
}


/*****************************************************************/
/**	Function: CalcMenuBarDestroy								**/
/**	Summary	: Calculator MenuBar Destroy						**/
/**	Param	: none												**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.02										**/
/**			: 2015.01.03										**/
/*****************************************************************/
void CalcMenuBarDestroy()
{
	free(calcMenuBar);
}

/*****************************************************************/
/**	Function: CalcMenuItemHandle								**/
/**	Summary	: Calculator Item of MenuBar Handle					**/
/**	Param	: GtkWidget *obj									**/
/**			: void *pData										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.03										**/
/*****************************************************************/
void CalcMenuItemHandle(GtkWidget *obj, void *pData)
{
	int itemFlag;

	if ((GtkWidget *)NULL == obj)
	{
		DEBUG_LOG("MenuItem is NULL");
		exit(1);
	}

	if ((void *)NULL == pData)
	{
		DEBUG_LOG("pData of MenuItem is NULL");
		exit(1);
	}

	itemFlag = (int)pData;

	DEBUG_LOG("MenuItem index:");

	printf("MenuItem index:[0x%08x]\n", itemFlag);
	switch (itemFlag)
	{
		/* RootMenu:计算器, MenuItem:复制 */
		case CALC_ROOT_MENU_CALC_COPY:
			break;
		/* RootMenu:计算器, MenuItem:粘贴 */
		case CALC_ROOT_MENU_CALC_PASTE:
			break;
		/* RootMenu:计算器, MenuItem:退出 */
		case CALC_ROOT_MENU_CALC_QUIT:

			break;
		/* RootMenu:模式, MenuItem:基本 */
		case CALC_ROOT_MENU_MODE_BASIC:
			break;
		/* RootMenu:模式, MenuItem:高级 */
		case CALC_ROOT_MENU_MODE_SENIOR:
			break;
		/* RootMenu:模式, MenuItem:编程 */
		case CALC_ROOT_MENU_MODE_PROGRAM:
			break;

		/* RootMenu:帮助, MenuItem:内容 */
		case CALC_ROOT_MENU_HELP_CONTENT:
			break;
		/* RootMenu:帮助, MenuItem:关于 */
		case CALC_ROOT_MENU_HELP_ABOUT:
			break;

		default:
			DEBUG_LOG("MenuItem index error");
			break;
	}
}



