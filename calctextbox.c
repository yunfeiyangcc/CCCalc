/*****************************************************************/
/**	File	: calctextbox.c										**/
/**	Summary	: Create Calculator Display TextBox					**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.02										**/
/*****************************************************************/

/*****************************************************************/
/** include head file											**/
/*****************************************************************/
#include "calctextbox.h"

/*****************************************************************/
/**	Function: CalcTextBoxInit									**/
/**	Summary	: Calculator Display TextBox Init					**/
/**	Param	: none												**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.02										**/
/*****************************************************************/
void CalcTextBoxInit()
{
	/* Variable Initialize */

	/* Create Calculator Display TextBox*/
	calcTextBoxDisplay = new CcWgtTextBox();

	/* Calculator Display TextBox Init*/
	calcTextBoxDisplay->Init(calcTextBoxDisplay);

	/* Calculator Display TextBox Edit Unable*/
	calcTextBoxDisplay->SetEditable(calcTextBoxDisplay, FALSE);
}

/*****************************************************************/
/**	Function: CalcTextBoxShow									**/
/**	Summary	: Calculator Display TextBox Show					**/
/**	Param	: none												**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.02										**/
/*****************************************************************/
void CalcTextBoxShow()
{
	calcTextBoxDisplay->Show(calcTextBoxDisplay);
}


/*****************************************************************/
/**	Function: CalcTextBoxDestroy								**/
/**	Summary	: Calculator Display TextBox Destroy				**/
/**	Param	: none												**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.02										**/
/*****************************************************************/
void CalcTextBoxDestroy()
{
	free(calcTextBoxDisplay);
}




