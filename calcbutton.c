/*****************************************************************/
/**	File	: calcbutton.c										**/
/**	Summary	: Create Calculator Button							**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.02										**/
/*****************************************************************/

/*****************************************************************/
/** include head file											**/
/*****************************************************************/
#include "calcbutton.h"

/*****************************************************************/
/**	Function: CalcButtonInit									**/
/**	Summary	: Calculator Button Init							**/
/**	Param	: none												**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.02										**/
/*****************************************************************/
void CalcButtonInit()

{
	/* Variable Initialize */

	/* Create Calculator Button */
	calcButtonZore	= new CcWgtButton();
	calcButtonOne	= new CcWgtButton();
	calcButtonTwo	= new CcWgtButton();
	calcButtonThree	= new CcWgtButton();
	calcButtonFour	= new CcWgtButton();
	calcButtonFive	= new CcWgtButton();
	calcButtonSix	= new CcWgtButton();
	calcButtonSeven	= new CcWgtButton();
	calcButtonEight	= new CcWgtButton();
	calcButtonNine	= new CcWgtButton();

	calcButtonClear = new CcWgtButton();
	calcButtonDel	= new CcWgtButton();
	calcButtonAdd	= new CcWgtButton();
	calcButtonSub	= new CcWgtButton();
	calcButtonMul	= new CcWgtButton();
	calcButtonDiv	= new CcWgtButton();
	calcButtonEqual	= new CcWgtButton();

	/* Calculator Button Init */
	calcButtonZore	->Init(calcButtonZore,	CALC_BUTTON_ZORE_STRING);
	calcButtonOne	->Init(calcButtonOne,	CALC_BUTTON_ONE_STRING);
	calcButtonTwo	->Init(calcButtonTwo,	CALC_BUTTON_TWO_STRING);
	calcButtonThree	->Init(calcButtonThree,	CALC_BUTTON_THREE_STRING);
	calcButtonFour	->Init(calcButtonFour,	CALC_BUTTON_FOUR_STRING);
	calcButtonFive	->Init(calcButtonFive,	CALC_BUTTON_FIVE_STRING);
	calcButtonSix	->Init(calcButtonSix,	CALC_BUTTON_SIX_STRING);
	calcButtonSeven	->Init(calcButtonSeven,	CALC_BUTTON_SEVEN_STRING);
	calcButtonEight	->Init(calcButtonEight,	CALC_BUTTON_EIGHT_STRING);
	calcButtonNine	->Init(calcButtonNine,	CALC_BUTTON_NINE_STRING);

	calcButtonClear	->Init(calcButtonClear,	CALC_BUTTON_CLEAR_STRING);
	calcButtonDel	->Init(calcButtonDel,	CALC_BUTTON_DEL_STRING);
	calcButtonAdd	->Init(calcButtonAdd,	CALC_BUTTON_ADD_STRING);
	calcButtonSub	->Init(calcButtonSub,	CALC_BUTTON_SUB_STRING);
	calcButtonMul	->Init(calcButtonMul,	CALC_BUTTON_MUL_STRING);
	calcButtonDiv	->Init(calcButtonDiv,	CALC_BUTTON_DIV_STRING);
	calcButtonEqual	->Init(calcButtonEqual,	CALC_BUTTON_EQUAL_STRING);

	/* Calculator Button OnClick AddEventListener */
	calcButtonZore	->AddOnClickedListener(calcButtonZore,	CalcButtonNumHandle, CALC_BUTTON_ZORE_STRING);
	calcButtonOne	->AddOnClickedListener(calcButtonOne,	CalcButtonNumHandle, CALC_BUTTON_ONE_STRING);
	calcButtonTwo	->AddOnClickedListener(calcButtonTwo,	CalcButtonNumHandle, CALC_BUTTON_TWO_STRING);
	calcButtonThree	->AddOnClickedListener(calcButtonThree,	CalcButtonNumHandle, CALC_BUTTON_THREE_STRING);
	calcButtonFour	->AddOnClickedListener(calcButtonFour,	CalcButtonNumHandle, CALC_BUTTON_FOUR_STRING);
	calcButtonFive	->AddOnClickedListener(calcButtonFive,	CalcButtonNumHandle, CALC_BUTTON_FIVE_STRING);
	calcButtonSix	->AddOnClickedListener(calcButtonSix,	CalcButtonNumHandle, CALC_BUTTON_SIX_STRING);
	calcButtonSeven	->AddOnClickedListener(calcButtonSeven,	CalcButtonNumHandle, CALC_BUTTON_SEVEN_STRING);
	calcButtonEight	->AddOnClickedListener(calcButtonEight,	CalcButtonNumHandle, CALC_BUTTON_EIGHT_STRING);
	calcButtonNine	->AddOnClickedListener(calcButtonNine,	CalcButtonNumHandle, CALC_BUTTON_NINE_STRING);

	calcButtonClear	->AddOnClickedListener(calcButtonClear,	CalcButtonClearHandle,	CALC_BUTTON_CLEAR_STRING);
	calcButtonDel	->AddOnClickedListener(calcButtonDel,	CalcButtonDelHandle,	CALC_BUTTON_DEL_STRING);
	calcButtonAdd	->AddOnClickedListener(calcButtonAdd,	CalcButtonAddHandle,	CALC_BUTTON_ADD_STRING);
	calcButtonSub	->AddOnClickedListener(calcButtonSub,	CalcButtonSubHandle,	CALC_BUTTON_SUB_STRING);
	calcButtonMul	->AddOnClickedListener(calcButtonMul,	CalcButtonMulHandle,	CALC_BUTTON_MUL_STRING);
	calcButtonDiv	->AddOnClickedListener(calcButtonDiv,	CalcButtonDivHandle,	CALC_BUTTON_DIV_STRING);
	calcButtonEqual	->AddOnClickedListener(calcButtonEqual,	CalcButtonEqualHandle,	CALC_BUTTON_EQUAL_STRING);
}

/*****************************************************************/
/**	Function: CalcButtonShow									**/
/**	Summary	: Calculator Button Show							**/
/**	Param	: none												**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.02										**/
/*****************************************************************/
void CalcButtonShow()
{
	calcButtonZore	->Show(calcButtonZore);
	calcButtonOne	->Show(calcButtonOne);
	calcButtonTwo	->Show(calcButtonTwo);
	calcButtonThree	->Show(calcButtonThree);
	calcButtonFour	->Show(calcButtonFour);
	calcButtonFive	->Show(calcButtonFive);
	calcButtonSix	->Show(calcButtonSix);
	calcButtonSeven	->Show(calcButtonSeven);
	calcButtonEight	->Show(calcButtonEight);
	calcButtonNine	->Show(calcButtonNine);

	calcButtonClear	->Show(calcButtonClear);
	calcButtonDel	->Show(calcButtonDel);
	calcButtonAdd	->Show(calcButtonAdd);
	calcButtonSub	->Show(calcButtonSub);
	calcButtonMul	->Show(calcButtonMul);
	calcButtonDiv	->Show(calcButtonDiv);
	calcButtonEqual	->Show(calcButtonEqual);
}


/*****************************************************************/
/**	Function: CalcButtonDestroy									**/
/**	Summary	: Calculator Button Destroy							**/
/**	Param	: none												**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.02										**/
/*****************************************************************/
void CalcButtonDestroy()
{
	free(calcButtonZore);
	free(calcButtonOne);
	free(calcButtonTwo);
	free(calcButtonThree);
	free(calcButtonFour);
	free(calcButtonFive);
	free(calcButtonSix);
	free(calcButtonSeven);
	free(calcButtonEight);
	free(calcButtonNine);

	free(calcButtonClear);
	free(calcButtonDel);
	free(calcButtonAdd);
	free(calcButtonSub);
	free(calcButtonMul);
	free(calcButtonDiv);
	free(calcButtonEqual);
}



/*****************************************************************/
/**	Function: CalcButtonZoreHandle								**/
/**	Summary	: Calculator Button Number(0-9) OnClick Handle		**/
/**	Param	: GtkWidget *widget									**/
/**			: void *pData										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.02										**/
/*****************************************************************/
void CalcButtonNumHandle(GtkWidget *widget, void *pData)
{

}

/*****************************************************************/
/**	Function: CalcButtonClearHandle								**/
/**	Summary	: Calculator Button Clear OnClick Handle			**/
/**	Param	: GtkWidget *widget									**/
/**			: void *pData										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.02										**/
/*****************************************************************/
void CalcButtonClearHandle(GtkWidget *widget, void *pData)
{

}

/*****************************************************************/
/**	Function: CalcButtonDelHandle								**/
/**	Summary	: Calculator Button Delete OnClick Handle			**/
/**	Param	: GtkWidget *widget									**/
/**			: void *pData										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.02										**/
/*****************************************************************/
void CalcButtonDelHandle(GtkWidget *widget, void *pData)
{

}

/*****************************************************************/
/**	Function: CalcButtonAddHandle								**/
/**	Summary	: Calculator Button ADD OnClick Handle				**/
/**	Param	: GtkWidget *widget									**/
/**			: void *pData										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.02										**/
/*****************************************************************/
void CalcButtonAddHandle(GtkWidget *widget, void *pData)
{

}

/*****************************************************************/
/**	Function: CalcButtonSubHandle								**/
/**	Summary	: Calculator Button SUB OnClick Handle				**/
/**	Param	: GtkWidget *widget									**/
/**			: void *pData										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.02										**/
/*****************************************************************/
void CalcButtonSubHandle(GtkWidget *widget, void *pData)
{

}

/*****************************************************************/
/**	Function: CalcButtonMulHandle								**/
/**	Summary	: Calculator Button MUL OnClick Handle				**/
/**	Param	: GtkWidget *widget									**/
/**			: void *pData										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.02										**/
/*****************************************************************/
void CalcButtonMulHandle(GtkWidget *widget, void *pData)
{


}

/*****************************************************************/
/**	Function: CalcButtonDivHandle								**/
/**	Summary	: Calculator Button DIV OnClick Handle				**/
/**	Param	: GtkWidget *widget									**/
/**			: void *pData										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.02										**/
/*****************************************************************/
void CalcButtonDivHandle(GtkWidget *widget, void *pData)
{

}

/*****************************************************************/
/**	Function: CalcButtonEqualHandle								**/
/**	Summary	: Calculator Button Equal OnClick Handle			**/
/**	Param	: GtkWidget *widget									**/
/**			: void *pData										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.02										**/
/*****************************************************************/
void CalcButtonEqualHandle(GtkWidget *widget, void *pData)
{

}




