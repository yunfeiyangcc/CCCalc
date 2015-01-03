/*****************************************************************/
/**	File	: calctable.h										**/
/**	Summary	: Create Calculator Table							**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.03										**/
/*****************************************************************/

#ifndef	_CALCTABLE_H_
#define	_CALCTABLE_H_

/*****************************************************************/
/** include head file											**/
/*****************************************************************/
#include "cc.widget/table.h"

/*****************************************************************/
/** Define														**/
/*****************************************************************/
#define CALC_FRAME_TABLE_ROWS		(4)
#define CALC_FRAME_TABLE_COLS		(1)
#define CALC_KEY_TABLE_ROWS			(5)
#define CALC_KEY_TABLE_COLS			(4)


#define CALC_FRAME_MENUBAR_POSITION		0, 1, 0, 1, GTK_FILL, GTK_FILL, 2, 2
#define CALC_FRAME_TEXTBOX_POSITION		0, 1, 1, 3, GTK_FILL, GTK_FILL, 2, 2
#define CALC_FRAME_KEYTABLE_POSITION	0, 1, 3, 4, GTK_FILL, GTK_FILL, 2, 2

#define CALC_KEY_BUTTON_CLEAR_POSITION	0, 2, 0, 1, GTK_FILL, GTK_FILL, 2, 2
#define CALC_KEY_BUTTON_DEL_POSITION	2, 4, 0, 1, GTK_FILL, GTK_FILL, 2, 2

#define CALC_KEY_BUTTON_SEVEN_POSITION	0, 1, 1, 2, GTK_FILL, GTK_FILL, 2, 2
#define CALC_KEY_BUTTON_EIGHT_POSITION	1, 2, 1, 2, GTK_FILL, GTK_FILL, 2, 2
#define CALC_KEY_BUTTON_NINE_POSITION	2, 3, 1, 2, GTK_FILL, GTK_FILL, 2, 2
#define CALC_KEY_BUTTON_ADD_POSITION	3, 4, 1, 2, GTK_FILL, GTK_FILL, 2, 2

#define CALC_KEY_BUTTON_FOUR_POSITION	0, 1, 2, 3, GTK_FILL, GTK_FILL, 2, 2
#define CALC_KEY_BUTTON_FIVE_POSITION	1, 2, 2, 3, GTK_FILL, GTK_FILL, 2, 2
#define CALC_KEY_BUTTON_SIX_POSITION	2, 3, 2, 3, GTK_FILL, GTK_FILL, 2, 2
#define CALC_KEY_BUTTON_SUB_POSITION	3, 4, 2, 3, GTK_FILL, GTK_FILL, 2, 2

#define CALC_KEY_BUTTON_ONE_POSITION	0, 1, 3, 4, GTK_FILL, GTK_FILL, 2, 2
#define CALC_KEY_BUTTON_TWO_POSITION	1, 2, 3, 4, GTK_FILL, GTK_FILL, 2, 2
#define CALC_KEY_BUTTON_THREE_POSITION	2, 3, 3, 4, GTK_FILL, GTK_FILL, 2, 2

#define CALC_KEY_BUTTON_ZORE_POSITION	0, 1, 4, 5, GTK_FILL, GTK_FILL, 2, 2
#define CALC_KEY_BUTTON_MUL_POSITION	1, 2, 4, 5, GTK_FILL, GTK_FILL, 2, 2
#define CALC_KEY_BUTTON_DIV_POSITION	2, 3, 4, 5, GTK_FILL, GTK_FILL, 2, 2

#define CALC_KEY_BUTTON_EQUAL_POSITION	3, 4, 3, 5, GTK_FILL, GTK_FILL, 2, 2


/*****************************************************************/
/** Global Variables											**/
/*****************************************************************/

/* Calculator Frame */
CcWgtTable *calcFrameTable;				// Frame Table

/*****************************************************************/
/**	Summary	: Function Declare									**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.03										**/
/*****************************************************************/
void CalcTableInit();
void CalcTableAddChild();
void CalcTableShow();
void CalcTableDestroy();

#endif	/* _CALCTABLE_H_ */

