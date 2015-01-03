/*****************************************************************/
/**	File	: calcbutton.h										**/
/**	Summary	: Create Calculator Button							**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.02										**/
/**			: 2015.01.03										**/
/*****************************************************************/

#ifndef	_CALCBUTTON_H_
#define	_CALCBUTTON_H_

/*****************************************************************/
/** include head file											**/
/*****************************************************************/
#include "cc.widget/button.h"

/*****************************************************************/
/** Define														**/
/*****************************************************************/

/* Button Display String */
#define CALC_BUTTON_ZORE_STRING			"0"
#define CALC_BUTTON_ONE_STRING			"1"
#define CALC_BUTTON_TWO_STRING			"2"
#define CALC_BUTTON_THREE_STRING		"3"
#define CALC_BUTTON_FOUR_STRING			"4"
#define CALC_BUTTON_FIVE_STRING			"5"
#define CALC_BUTTON_SIX_STRING			"6"
#define CALC_BUTTON_SEVEN_STRING		"7"
#define CALC_BUTTON_EIGHT_STRING		"8"
#define CALC_BUTTON_NINE_STRING			"9"

#define CALC_BUTTON_CLEAR_STRING		"C"
#define CALC_BUTTON_DEL_STRING			"←"
#define CALC_BUTTON_ADD_STRING			"+"
#define CALC_BUTTON_SUB_STRING			"-"
#define CALC_BUTTON_MUL_STRING			"*"
#define CALC_BUTTON_DIV_STRING			"/"
#define CALC_BUTTON_EQUAL_STRING		"="

/*****************************************************************/
/** Global Variables											**/
/*****************************************************************/
/* Button */
CcWgtButton *calcButtonZore;					// Button 0
CcWgtButton *calcButtonOne;						// Button 1
CcWgtButton *calcButtonTwo;						// Button 2
CcWgtButton *calcButtonThree;					// Button 3
CcWgtButton *calcButtonFour;					// Button 4
CcWgtButton *calcButtonFive;					// Button 5
CcWgtButton *calcButtonSix;						// Button 6
CcWgtButton *calcButtonSeven;					// Button 7
CcWgtButton *calcButtonEight;					// Button 8
CcWgtButton *calcButtonNine;					// Button 9

CcWgtButton *calcButtonClear;					// Button Clear		C
CcWgtButton *calcButtonDel;						// Button Delete	D
CcWgtButton *calcButtonAdd;						// Button Add		+
CcWgtButton *calcButtonSub;						// Button Sub		-
CcWgtButton *calcButtonMul;						// Button Mul		*
CcWgtButton *calcButtonDiv;						// Button Div		/
CcWgtButton *calcButtonEqual;					// Button Equal		=


/*****************************************************************/
/**	Summary	: Function Declare									**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.02										**/
/*****************************************************************/
void CalcButtonInit();
void CalcButtonShow();
void CalcButtonDestroy();

#endif	/* _CALCBUTTON_H_ */

