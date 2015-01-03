/*****************************************************************/
/**	File	: calcgui.c											**/
/**	Summary	: Create Calculator GUI								**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.03										**/
/*****************************************************************/

/*****************************************************************/
/** include head file											**/
/*****************************************************************/
#include "calcgui.h"
#include "calctable.h"
#include "calcmenubar.h"
#include "calctextbox.h"
#include "calcbutton.h"

/*****************************************************************/
/**	Function: CalcGuiInit										**/
/**	Summary	: Calculator GUI Init								**/
/**	Param	: gint argc											**/
/**			: gchar *argv[]										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.03										**/
/*****************************************************************/
void CalcGuiInit(gint argc, gchar *argv[])
{
	/* Variable Initialize */

	/* Calculator Gui CcWgtWindow Init */
	calcGuiWindow = new CcWgtWindow();
	calcGuiWindow->Init(calcGuiWindow, argc, argv, GTK_WINDOW_TOPLEVEL);
	calcGuiWindow->SetTitle(calcGuiWindow, "计算器	make in CC");
	calcGuiWindow->SetPosition(calcGuiWindow, GTK_WIN_POS_CENTER_ALWAYS);
	calcGuiWindow->SetSize(calcGuiWindow, 244, 300);

	CalcButtonInit();
	CalcTextBoxInit();
	CalcMenuBarInit();
	CalcTableInit();
	CalcTableAddChild();
	calcGuiWindow->AddChild(calcGuiWindow, calcFrameTable->obj);
	DEBUG_LOG("Calculator GUI Init end");
}

/*****************************************************************/
/**	Function: CalcGuiShow										**/
/**	Summary	: Calculator GUI Show								**/
/**	Param	: none												**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.03										**/
/*****************************************************************/
void CalcGuiShow()
{
	DEBUG_LOG("Calculator GUI Show");
	CalcTableShow();
	CalcMenuBarShow();
	CalcTextBoxShow();
	CalcButtonShow();
	calcGuiWindow->Show(calcGuiWindow);
}


/*****************************************************************/
/**	Function: CalcGuiDestroy									**/
/**	Summary	: Calculator GUI Destroy							**/
/**	Param	: none												**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.03										**/
/*****************************************************************/
void CalcGuiDestroy()
{
	CalcButtonDestroy();
	CalcTextBoxDestroy();
	CalcMenuBarDestroy();
	CalcTableDestroy();
	free(calcGuiWindow);
}

