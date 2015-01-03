/*****************************************************************/
/**	File	: calctable.c										**/
/**	Summary	: Create Calculator Table							**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.03										**/
/*****************************************************************/

/*****************************************************************/
/** include head file											**/
/*****************************************************************/
#include "calctable.h"
#include "calcmenubar.h"
#include "calctextbox.h"
#include "calcbutton.h"

/*****************************************************************/
/** Internal Global Variables									**/
/*****************************************************************/
/* Calculator Key Table */
static CcWgtTable *calcKeyTable;				// Key Table


/*****************************************************************/
/**	Function: CalcTableInit										**/
/**	Summary	: Calculator Table Init								**/
/**	Param	: none												**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.03										**/
/*****************************************************************/
void CalcTableInit()
{
	/* Variable Initialize */

	/* Create Table */
	calcFrameTable = new CcWgtTable();
	calcKeyTable = new CcWgtTable();

	/* Table Init */
	calcFrameTable->Init(calcFrameTable, CALC_FRAME_TABLE_ROWS, CALC_FRAME_TABLE_COLS, FALSE);
	calcKeyTable->Init(calcKeyTable, CALC_KEY_TABLE_ROWS, CALC_KEY_TABLE_COLS, FALSE);

	calcFrameTable->SetPosition(calcFrameTable, 200, 300);
	calcFrameTable->SetSize(calcFrameTable, 300, 400);
	calcKeyTable->SetPosition(calcKeyTable, 50, 50);
	calcKeyTable->SetSize(calcKeyTable, 200, 400);
}

/*****************************************************************/
/**	Function: CalcTableAddChild									**/
/**	Summary	: Calculator Table Add Child						**/
/**	Param	: none												**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.03										**/
/*****************************************************************/
void CalcTableAddChild()
{
	DEBUG_LOG("frame table add child");
	/* Frame Table Add Child */
	calcFrameTable->addChild(calcFrameTable, calcMenuBar->obj, CALC_FRAME_MENUBAR_POSITION);
	DEBUG_LOG("frame table add child");
	calcFrameTable->addChild(calcFrameTable, calcTextBoxDisplay->obj, CALC_FRAME_TEXTBOX_POSITION);
	DEBUG_LOG("frame table add child");
	calcFrameTable->addChild(calcFrameTable, calcKeyTable->obj, CALC_FRAME_KEYTABLE_POSITION);

	DEBUG_LOG("frame table add child");
	/* Key Table Add Child */
	DEBUG_LOG("frame table add child");
	calcKeyTable->addChild(calcKeyTable, calcButtonClear->obj,	CALC_KEY_BUTTON_CLEAR_POSITION);
	DEBUG_LOG("frame table add child");
	calcKeyTable->addChild(calcKeyTable, calcButtonDel->obj,	CALC_KEY_BUTTON_DEL_POSITION);
	calcKeyTable->addChild(calcKeyTable, calcButtonSeven->obj,	CALC_KEY_BUTTON_SEVEN_POSITION);
	calcKeyTable->addChild(calcKeyTable, calcButtonEight->obj,	CALC_KEY_BUTTON_EIGHT_POSITION);
	calcKeyTable->addChild(calcKeyTable, calcButtonNine->obj,	CALC_KEY_BUTTON_NINE_POSITION);
	calcKeyTable->addChild(calcKeyTable, calcButtonAdd->obj,	CALC_KEY_BUTTON_ADD_POSITION);
	calcKeyTable->addChild(calcKeyTable, calcButtonFour->obj,	CALC_KEY_BUTTON_FOUR_POSITION);
	calcKeyTable->addChild(calcKeyTable, calcButtonFive->obj,	CALC_KEY_BUTTON_FIVE_POSITION);
	calcKeyTable->addChild(calcKeyTable, calcButtonSix->obj,	CALC_KEY_BUTTON_SIX_POSITION);
	calcKeyTable->addChild(calcKeyTable, calcButtonSub->obj,	CALC_KEY_BUTTON_SUB_POSITION);
	calcKeyTable->addChild(calcKeyTable, calcButtonOne->obj,	CALC_KEY_BUTTON_ONE_POSITION);
	calcKeyTable->addChild(calcKeyTable, calcButtonTwo->obj,	CALC_KEY_BUTTON_TWO_POSITION);
	calcKeyTable->addChild(calcKeyTable, calcButtonThree->obj,	CALC_KEY_BUTTON_THREE_POSITION);
	calcKeyTable->addChild(calcKeyTable, calcButtonZore->obj,	CALC_KEY_BUTTON_ZORE_POSITION);
	calcKeyTable->addChild(calcKeyTable, calcButtonMul->obj,	CALC_KEY_BUTTON_MUL_POSITION);
	calcKeyTable->addChild(calcKeyTable, calcButtonDiv->obj,	CALC_KEY_BUTTON_DIV_POSITION);
	calcKeyTable->addChild(calcKeyTable, calcButtonEqual->obj,	CALC_KEY_BUTTON_EQUAL_POSITION);
}

/*****************************************************************/
/**	Function: CalcTableShow										**/
/**	Summary	: Calculator Table Show								**/
/**	Param	: none												**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.03										**/
/*****************************************************************/
void CalcTableShow()
{
	DEBUG_LOG("Calculator Table Show-------------");
	calcFrameTable->Show(calcFrameTable);
	calcKeyTable->Show(calcKeyTable);
}


/*****************************************************************/
/**	Function: CalcTableDestroy									**/
/**	Summary	: Calculator Table Destroy							**/
/**	Param	: none												**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.03										**/
/*****************************************************************/
void CalcTableDestroy()
{
	free(calcFrameTable);
	free(calcKeyTable);
}

