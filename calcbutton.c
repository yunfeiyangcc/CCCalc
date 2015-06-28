/*****************************************************************/
/**	File	: calcbutton.c										**/
/**	Summary	: Create Calculator Button							**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.02										**/
/**			: 2015.01.03										**/
/**			: 2015.06.28										**/
/*****************************************************************/

/*****************************************************************/
/** include head file											**/
/*****************************************************************/
#include "calcbutton.h"
#include "calctextbox.h"

/*****************************************************************/
/** Define														**/
/*****************************************************************/
#define CALC_OPERAND_NUM_MAX	(20)		// Calculator Operand Number Max

/*****************************************************************/
/** Global Variables											**/
/*****************************************************************/
typedef struct _CalcOperand
{
	char num1[CALC_OPERAND_NUM_MAX];		// Operand Number 1
	int num1Len;							// Operand Number 1 length
	char operator;							// Operator
	char num2[CALC_OPERAND_NUM_MAX];		// Operand Number 2
	int num2Len;							// Operand Number 2 length
	char result[CALC_OPERAND_NUM_MAX];		// Result
	int resultLen;							// Operand Number 2 length
}CalcOperand;

static CalcOperand calcOperand;

/*****************************************************************/
/** Internal Function Declare									**/
/*****************************************************************/
void CalcButtonNumHandle(GtkWidget *widget, void *pData);
void CalcButtonClearHandle(GtkWidget *widget, void *pData);
void CalcButtonDelHandle(GtkWidget *widget, void *pData);
void CalcButtonAddHandle(GtkWidget *widget, void *pData);
void CalcButtonSubHandle(GtkWidget *widget, void *pData);
void CalcButtonMulHandle(GtkWidget *widget, void *pData);
void CalcButtonDivHandle(GtkWidget *widget, void *pData);
void CalcButtonEqualHandle(GtkWidget *widget, void *pData);

/*****************************************************************/
/**	Function: CalcButtonInit									**/
/**	Summary	: Calculator Button Init							**/
/**	Param	: none												**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.02										**/
/**			: 2015.01.03										**/
/*****************************************************************/
void CalcButtonInit()

{
	/* Variable Initialize */
	memset(&calcOperand, 0x00, sizeof(CalcOperand));

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

	/* Calculator Button Set Position And Size */
	calcButtonClear	->SetSize(calcButtonClear,	115, 35);
	calcButtonDel	->SetSize(calcButtonDel,	115, 35);

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
/**			: 2015.01.03										**/
/**			: 2015.06.28										**/
/*****************************************************************/
void CalcButtonNumHandle(GtkWidget *widget, void *pData)
{
	char displayText[3 * CALC_OPERAND_NUM_MAX + 10];

	DEBUG_LOG((char *)pData);

	/* reset operator number when input 0 */
	if ( 0 == atol(calcOperand.num1) )
	{
		memset(calcOperand.num1, 0x00, sizeof(calcOperand.num1));
		calcOperand.num1Len = 0;
	}
	
	if ( 0 == atol(calcOperand.num2) )
	{
		memset(calcOperand.num2, 0x00, sizeof(calcOperand.num2));
		calcOperand.num2Len = 0;
	}

	/* Racord operator number 1 before click the operator button */
	if ( '\0' == calcOperand.operator )
	{
		calcOperand.num1[calcOperand.num1Len++] = *((char *)pData);
		calcTextBoxDisplay->SetText(calcTextBoxDisplay, calcOperand.num1);
	}
	/* Racord operator number 2 after click the operator button */
	else
	{
		calcOperand.num2[calcOperand.num2Len++] = *((char *)pData);
		sprintf(displayText, "%s %c %s", calcOperand.num1, calcOperand.operator, calcOperand.num2);
		calcTextBoxDisplay->SetText(calcTextBoxDisplay, displayText);
	}

	printf("calcOperand.num1:");
	DEBUG_LOG(calcOperand.num1);
	printf("calcOperand.num2:");
	DEBUG_LOG(calcOperand.num2);

}

/*****************************************************************/
/**	Function: CalcButtonClearHandle								**/
/**	Summary	: Calculator Button Clear OnClick Handle			**/
/**	Param	: GtkWidget *widget									**/
/**			: void *pData										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.02										**/
/**			: 2015.06.28										**/
/*****************************************************************/
void CalcButtonClearHandle(GtkWidget *widget, void *pData)
{
	DEBUG_LOG((char *)pData);
	memset(&calcOperand, 0x00, sizeof(CalcOperand));
	calcTextBoxDisplay->SetText(calcTextBoxDisplay, "");
}

/*****************************************************************/
/**	Function: CalcButtonDelHandle								**/
/**	Summary	: Calculator Button Delete OnClick Handle			**/
/**	Param	: GtkWidget *widget									**/
/**			: void *pData										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.02										**/
/**			: 2015.06.28										**/
/*****************************************************************/
void CalcButtonDelHandle(GtkWidget *widget, void *pData)
{
	char displayText[3 * CALC_OPERAND_NUM_MAX + 10];

	DEBUG_LOG((char *)pData);

	if ( '\0' == calcOperand.operator )
	{
		calcOperand.num1[--calcOperand.num1Len] = '\0';
		calcTextBoxDisplay->SetText(calcTextBoxDisplay, calcOperand.num1);
	}
	else
	{
		calcOperand.num2[--calcOperand.num2Len] = '\0';
		sprintf(displayText, "%s %c %s", calcOperand.num1, calcOperand.operator, calcOperand.num2);
		calcTextBoxDisplay->SetText(calcTextBoxDisplay, displayText);
	}
}

/*****************************************************************/
/**	Function: CalcButtonAddHandle								**/
/**	Summary	: Calculator Button ADD OnClick Handle				**/
/**	Param	: GtkWidget *widget									**/
/**			: void *pData										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.02										**/
/**			: 2015.06.28										**/
/*****************************************************************/
void CalcButtonAddHandle(GtkWidget *widget, void *pData)
{
	char displayText[3 * CALC_OPERAND_NUM_MAX + 10];

	DEBUG_LOG((char *)pData);
	calcOperand.operator = *((char *)pData);

	sprintf(displayText, "%s + ", calcOperand.num1);
	calcTextBoxDisplay->SetText(calcTextBoxDisplay, displayText);
}

/*****************************************************************/
/**	Function: CalcButtonSubHandle								**/
/**	Summary	: Calculator Button SUB OnClick Handle				**/
/**	Param	: GtkWidget *widget									**/
/**			: void *pData										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.02										**/
/**			: 2015.06.28										**/
/*****************************************************************/
void CalcButtonSubHandle(GtkWidget *widget, void *pData)
{
	char displayText[3 * CALC_OPERAND_NUM_MAX + 10];

	DEBUG_LOG((char *)pData);
	calcOperand.operator = *((char *)pData);
	
	sprintf(displayText, "%s - ", calcOperand.num1);
	calcTextBoxDisplay->SetText(calcTextBoxDisplay, displayText);
}

/*****************************************************************/
/**	Function: CalcButtonMulHandle								**/
/**	Summary	: Calculator Button MUL OnClick Handle				**/
/**	Param	: GtkWidget *widget									**/
/**			: void *pData										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.02										**/
/**			: 2015.06.28										**/
/*****************************************************************/
void CalcButtonMulHandle(GtkWidget *widget, void *pData)
{
	char displayText[3 * CALC_OPERAND_NUM_MAX + 10];

	DEBUG_LOG((char *)pData);
	calcOperand.operator = *((char *)pData);
	
	sprintf(displayText, "%s * ", calcOperand.num1);
	calcTextBoxDisplay->SetText(calcTextBoxDisplay, displayText);
}

/*****************************************************************/
/**	Function: CalcButtonDivHandle								**/
/**	Summary	: Calculator Button DIV OnClick Handle				**/
/**	Param	: GtkWidget *widget									**/
/**			: void *pData										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.02										**/
/**			: 2015.06.28										**/
/*****************************************************************/
void CalcButtonDivHandle(GtkWidget *widget, void *pData)
{
	char displayText[3 * CALC_OPERAND_NUM_MAX + 10];

	DEBUG_LOG((char *)pData);
	calcOperand.operator = *((char *)pData);
	
	sprintf(displayText, "%s / ", calcOperand.num1);
	calcTextBoxDisplay->SetText(calcTextBoxDisplay, displayText);
}

/*****************************************************************/
/**	Function: CalcButtonEqualHandle								**/
/**	Summary	: Calculator Button Equal OnClick Handle			**/
/**	Param	: GtkWidget *widget									**/
/**			: void *pData										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.02										**/
/**			: 2015.06.28										**/
/*****************************************************************/
void CalcButtonEqualHandle(GtkWidget *widget, void *pData)
{
	long num1;
	long num2;
	long result;
	char displayText[3 * CALC_OPERAND_NUM_MAX + 10];

	/* variable initialization */
	num1 = atol(calcOperand.num1);
	num2 = atol(calcOperand.num2);
	
	DEBUG_LOG((char *)pData);
	switch(calcOperand.operator)
	{
		/* addition */
		case CALC_BUTTON_ADD_CHAR:
			result = num1 + num2;
			break;
		/* substaction */
		case CALC_BUTTON_SUB_CHAR:
			result = num1 - num2;
			break;
		/* multiplication */	 
		case CALC_BUTTON_MUL_CHAR:
			result = num1 * num2;
			break;
		/* division */
		case CALC_BUTTON_DIV_CHAR:
			result = num1 / num2;
			break;
		default:
			DEBUG_LOG("calcOperand.operator error");
			return;
			break;
	}

	sprintf(calcOperand.result, "%ld", result);
	calcOperand.resultLen = strlen(calcOperand.result);

	printf("calcOperand.result:");
	DEBUG_LOG(calcOperand.result);
	printf("calcOperand.resultlen:%d\n", calcOperand.resultLen);
	
	sprintf(displayText, "%s %c %s = %s", calcOperand.num1, calcOperand.operator, calcOperand.num2, calcOperand.result);
	calcTextBoxDisplay->SetText(calcTextBoxDisplay, displayText);
}

