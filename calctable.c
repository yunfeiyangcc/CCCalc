/*****************************************************************/
/**	File	: gui.c                     						**/
/**	Summary	: Create GUI										**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.28										**/
/**			: 2014.12.30										**/
/**			: 2015.01.02										**/
/*****************************************************************/

/*****************************************************************/
/** include head file											**/
/*****************************************************************/
#include "gui.h"

/*****************************************************************/
/**	Function: guiInit											**/
/**	Summary	: GUI Init											**/
/**	Param	: none												**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/**			: 2015.01.02										**/
/*****************************************************************/
void guiInit(gint argc, gchar *argv[])
{
	/* Variable Initialize */
	guint cnt = 0;

	/* Calculator Gui CcWgtWindow Init */
	calcGuiWindow = new CcWgtWindow();
	calcGuiWindow->Init(calcGuiWindow, argc, argv, GTK_WINDOW_TOPLEVEL);
	calcGuiWindow->SetTitle(calcGuiWindow, "Calculator		make in CC");
	calcGuiWindow->SetPosition(calcGuiWindow, GTK_WIN_POS_CENTER_ALWAYS);
	calcGuiWindow->SetSize(calcGuiWindow, 300, 400);

	/* Calculator Menu */
	menuBar = new CcWgtMenuBar();
	fileRootMenu = new CcWgtRootMenu();

	for (cnt = 0; cnt < FILE_MENU_ITEM_NUM; cnt++)
	{
		fileMenuItem[cnt] = new CcWgtMenuItem();
	}

	/* Calculator Gui Table Init */
	calcGuiFrameTable = new CcWgtTable();
	calcGuiFrameTable->Init(calcGuiFrameTable, 10, 6, FALSE);
	calcGuiKeyTable = new CcWgtTable();
	calcGuiKeyTable->Init(calcGuiKeyTable, 5, 4, FALSE);

	/* Calculator Gui Display TextBox Init*/
	calcGuiTextBox = new CcWgtTextBox();
	calcGuiTextBox->Init(calcGuiTextBox);

	/* Calculator Gui Button Init */
	calcGuiBtnZore	= new CcWgtButton();
	calcGuiBtnOne	= new CcWgtButton();
	calcGuiBtnTwo	= new CcWgtButton();
	calcGuiBtnThree	= new CcWgtButton();
	calcGuiBtnFour	= new CcWgtButton();
	calcGuiBtnFive	= new CcWgtButton();
	calcGuiBtnSix	= new CcWgtButton();
	calcGuiBtnSeven	= new CcWgtButton();
	calcGuiBtnEight	= new CcWgtButton();
	calcGuiBtnNine	= new CcWgtButton();

	calcGuiBtnZore	->Init(calcGuiBtnZore,	"0");
	calcGuiBtnOne	->Init(calcGuiBtnOne,	"1");
	calcGuiBtnTwo	->Init(calcGuiBtnTwo,	"2");
	calcGuiBtnThree	->Init(calcGuiBtnThree,	"3");
	calcGuiBtnFour	->Init(calcGuiBtnFour,	"4");
	calcGuiBtnFive	->Init(calcGuiBtnFive,	"5");
	calcGuiBtnSix	->Init(calcGuiBtnSix,	"6");
	calcGuiBtnSeven	->Init(calcGuiBtnSeven,	"7");
	calcGuiBtnEight	->Init(calcGuiBtnEight,	"8");
	calcGuiBtnNine	->Init(calcGuiBtnNine,	"9");

	calcGuiBtnClear = new CcWgtButton();
	calcGuiBtnDel	= new CcWgtButton();
	calcGuiBtnAdd	= new CcWgtButton();
	calcGuiBtnSub	= new CcWgtButton();
	calcGuiBtnMul	= new CcWgtButton();
	calcGuiBtnDiv	= new CcWgtButton();
	calcGuiBtnEqual	= new CcWgtButton();

	calcGuiBtnClear	->Init(calcGuiBtnClear,	"C");
	calcGuiBtnDel	->Init(calcGuiBtnDel,	"D");
	calcGuiBtnAdd	->Init(calcGuiBtnAdd,	"+");
	calcGuiBtnSub	->Init(calcGuiBtnSub,	"-");
	calcGuiBtnMul	->Init(calcGuiBtnMul,	"*");
	calcGuiBtnDiv	->Init(calcGuiBtnDiv,	"/");
	calcGuiBtnEqual	->Init(calcGuiBtnEqual,	"=");
}

/*****************************************************************/
/**	Function: guiShow											**/
/**	Summary	: GUI Show											**/
/**	Param	: none												**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/*****************************************************************/
void guiShow()
{
	calcGuiWindow->Show(calcGuiWindow);
}


/*****************************************************************/
/**	Function: guiDestroy										**/
/**	Summary	: GUI Destroy										**/
/**	Param	: none												**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/*****************************************************************/
void guiDestroy()
{

}




