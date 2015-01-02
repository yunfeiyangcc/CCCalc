/*****************************************************************/
/**	File	: calctextbox.h										**/
/**	Summary	: Create Calculator Display TextBox					**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.02										**/
/*****************************************************************/

#ifndef	_CALCTEXTBOX_H_
#define	_CALCTEXTBOX_H_

/*****************************************************************/
/** include head file											**/
/*****************************************************************/
#include "cc.widget/textbox.h"

/*****************************************************************/
/** Define														**/
/*****************************************************************/

/*****************************************************************/
/** Global Variables											**/
/*****************************************************************/
/* Claculator TextBox Display */
CcWgtTextBox *calcTextBoxDisplay;				// Display

/*****************************************************************/
/**	Summary	: Function Declare									**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.02										**/
/*****************************************************************/
void CalcTextBoxInit();
void CalcTextBoxShow();
void CalcTextBoxDestroy();

#endif	/* _CALCTEXTBOX_H_ */
