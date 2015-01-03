/*****************************************************************/
/**	File	: textbox.h											**/
/**	Summary	: CcWgtTextBox Object Define						**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/**			: 2015.01.02										**/
/*****************************************************************/

#ifndef	_TEXTBOX_H_
#define	_TEXTBOX_H_

/*****************************************************************/
/** include head file											**/
/*****************************************************************/
#include "common.h"

/*****************************************************************/
/** Define														**/
/*****************************************************************/

/*****************************************************************/
/**	Object  : CcWgtTextBox 										**/
/**	Summary	: CcWgtTextBox Object Define						**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/**			: 2015.01.02										**/
/*****************************************************************/
typedef class _CcWgtTextBox
{
	GtkWidget* obj;						// CcWgtTextBox Object
	
	void (*Init)(class _CcWgtTextBox *this);
	void (*SetEditable)(class _CcWgtTextBox *this, gboolean editable);
	void (*SetAlign)(class _CcWgtTextBox *this, gfloat align);
	void (*SetText)(class _CcWgtTextBox *this, const gchar *text);
	void (*AppendText)(class _CcWgtTextBox *this, const gchar *text);
	const gchar *(*GetText)(class _CcWgtTextBox *this);
	void (*SetPosition)(class _CcWgtTextBox *this, gint x, gint y);
	void (*SetSize)(class _CcWgtTextBox *this, gint width, gint height);
	void (*Show)(class _CcWgtTextBox *this);
} CcWgtTextBox;

/*****************************************************************/
/**	Summary	: Function Declare									**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/**			: 2015.01.02										**/
/*****************************************************************/
CcWgtTextBox *newCcWgtTextBox();										// New CcWgtTextBox Object
void InitCcWgtTextBox(CcWgtTextBox *this);								// Initialize CcWgtTextBox object
void SetCcWgtTextBoxEditable(CcWgtTextBox *this, gboolean editable);	// Set CcWgtTextBox Editable
void SetCcWgtTextBoxAlign(CcWgtTextBox *this, gfloat align);			// Set CcWgtTextBox Align
void SetCcWgtTextBoxText(CcWgtTextBox *this, const gchar *text);		// Set CcWgtTextBox Text
void AppendCcWgtTextBoxText(CcWgtTextBox *this, const gchar *text);		// Append CcWgtTextBox Text
const gchar *GetCcWgtTextBoxText(CcWgtTextBox *this);					// Get CcWgtTextBox Text
void SetCcWgtTextBoxPosition(CcWgtTextBox *this, gint x, gint y);		// Set CcWgtTextBox Position
void SetCcWgtTextBoxSize(CcWgtTextBox *this, gint width, gint height);	// Set CcWgtTextBox Size
void CcWgtTextBoxTextShow(CcWgtTextBox *this);							// CcWgtTextBox Show

#endif	/* _TEXTBOX_H_ */


