/*****************************************************************/
/**	File	: gui.c                     						**/
/**	Summary	: Create GUI										**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.28										**/
/**			: 2014.12.30										**/
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
/*****************************************************************/
void guiInit(gint argc, gchar *argv[])
{
	/* Calculator Gui Window Init */
	calcGuiWindow = new Window();
	calcGuiWindow->Init(calcGuiWindow, argc, argv, GTK_WINDOW_TOPLEVEL);
	calcGuiWindow->SetTitle(calcGuiWindow, "Calculator		make in CC");
	calcGuiWindow->SetPosition(calcGuiWindow, GTK_WIN_POS_CENTER_ALWAYS);
	calcGuiWindow->SetSize(calcGuiWindow, 300, 400);

	/* Calculator Gui Table Init */
	calcGuiFrameTable = new Table();
	calcGuiFrameTable->Init(calcGuiFrameTable, 10, 6, FALSE);
	calcGuiKeyTable = new Table();
	calcGuiKeyTable->Init(calcGuiKeyTable, 5, 4, FALSE);

	/* Calculator Gui Display TextBox Init*/
	calcGuiTextBox = new TextBox();
	calcGuiTextBox->Init(calcGuiTextBox);

	/* Calculator Gui Button Init */
	calcGuiBtnZore	= new Button();
	calcGuiBtnOne	= new Button();
	calcGuiBtnTwo	= new Button();
	calcGuiBtnThree	= new Button();
	calcGuiBtnFour	= new Button();
	calcGuiBtnFive	= new Button();
	calcGuiBtnSix	= new Button();
	calcGuiBtnSeven	= new Button();
	calcGuiBtnEight	= new Button();
	calcGuiBtnNine	= new Button();

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

	calcGuiBtnClear = new Button();
	calcGuiBtnDel	= new Button();
	calcGuiBtnAdd	= new Button();
	calcGuiBtnSub	= new Button();
	calcGuiBtnMul	= new Button();
	calcGuiBtnDiv	= new Button();
	calcGuiBtnEqual	= new Button();

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




