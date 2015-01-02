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

	/* Create Calculator Menu */
	calcMenuBar = new CcWgtMenuBar();
	calcMenuBar->Init(calcMenuBar);

	for (i = 0; strcmp(menuTable[i].rootMenuName, CALC_MENU_END); i++)
	{
		calcRootMenuCalc[i] = new CcWgtRootMenu();
		calcRootMenuCalc[i]->Init(calcRootMenuCalc[i], menuTable[i].rootMenuName);

		for (j = 0; strcmp(menuTable[i].menuItemTable[j].menuItemName, CALC_MENU_END); j++)
		{
			calcMenuItemCalc[j] = new CcWgtMenuItem();
			calcMenuItemCalc[j]->Init(calcMenuItemCalc[j], menuTable[i].menuItemTable[j].menuItemName);

			calcRootMenuCalc[i]->AppendItem(calcRootMenuCalc[i], calcMenuItemCalc[j]);
		}

		calcMenuBar->AppendRootMenu(calcMenuBar, calcRootMenuCalc[i]);
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
/*****************************************************************/
void CalcMenuBarDestroy()
{

}




