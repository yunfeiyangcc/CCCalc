/*****************************************************************/
/**	File	: textbox.h											**/
/**	Summary	: TextBox Object Define								**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
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
/**	Object  : TextBox 											**/
/**	Summary	: TextBox Object Define								**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/*****************************************************************/
typedef class _TextBox
{
	GtkWidget* obj;						// TextBox Object
	
	void (*Init)(class _TextBox *this);
	void (*SetEditable)(class _TextBox *this, gboolean editable);
	void (*SetAlign)(class _TextBox *this, gfloat align);
	void (*SetText)(class _TextBox *this, const gchar *text);
	void (*AppendText)(class _TextBox *this, const gchar *text);
	const gchar *(*GetText)(class _TextBox *this);
} TextBox;

/*****************************************************************/
/**	Summary	: Function Declare									**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/*****************************************************************/
TextBox *newTextBox();											// New TextBox Object
void InitTextBox(TextBox *this);								// Initialize TextBox object
void SetTextBoxEditable(TextBox *this, gboolean editable);		// Set TextBox Editable
void SetTextBoxAlign(TextBox *this, gfloat align);				// Set TextBox Align
void SetTextBoxText(TextBox *this, const gchar *text);			// Set TextBox Text
void AppendTextBoxText(TextBox *this, const gchar *text);		// Append TextBox Text
const gchar *GetTextBoxText(TextBox *this);						// Get TextBox Text

#endif	/* _TEXTBOX_H_ */


