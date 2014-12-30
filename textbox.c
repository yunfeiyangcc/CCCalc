/*****************************************************************/
/**	File	: textbox.c											**/
/**	Summary	: TextBox Object									**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/*****************************************************************/

/*****************************************************************/
/** include head file											**/
/*****************************************************************/
#include "textbox.h"

/*****************************************************************/
/**	Function: newTextBox										**/
/**	Summary	: New TextBox Object								**/
/**	Param	: none												**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/*****************************************************************/
TextBox *newTextBox()
{
	TextBox *textbox = (TextBox *)malloc(sizeof(TextBox));

	if ( (TextBox *)NULL == textbox )
	{
		DEBUG_LOG("new TextBox error");
		exit(1);
	}

	textbox->Init			= InitTextBox;
	textbox->SetEditable	= SetTextBoxEditable;
	textbox->SetAlign		= SetTextBoxAlign;
	textbox->SetText		= SetTextBoxText;
	textbox->AppendText		= AppendTextBoxText;
	textbox->GetText		= GetTextBoxText;

	return textbox;
}

/*****************************************************************/
/**	Function: InitTextBox										**/
/**	Summary	: Initialize TextBox object							**/
/**	Param	: TextBox *this										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/*****************************************************************/
void InitTextBox(TextBox *this)
{
	this->obj = gtk_entry_new();
}
/*****************************************************************/
/**	Function: SetTextBoxEditable								**/
/**	Summary	: Set TextBox Editable								**/
/**	Param	: TextBox *this										**/
/**			: gboolean editable									**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/*****************************************************************/
void SetTextBoxEditable(TextBox *this, gboolean editable)
{
	GTK_ENTRY(this->obj)->editable = editable;
}

/*****************************************************************/
/**	Function: SetTextBoxAlign									**/
/**	Summary	: Set TextBox Align									**/
/**	Param	: TextBox *this										**/
/**			: gfloat align										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/*****************************************************************/
void SetTextBoxAlign(TextBox *this, gfloat align)
{
//	GTK_ENTRY(this->obj)->xalign = (gfloat)align;
}

/*****************************************************************/
/**	Function: SetTextBoxText									**/
/**	Summary	: Set TextBox Text									**/
/**	Param	: TextBox *this							align			**/
/**			: const gchar *text									**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/*****************************************************************/
void SetTextBoxText(TextBox *this, const gchar *text)
{
	gtk_entry_set_text(GTK_ENTRY(this->obj), text);
}

/*****************************************************************/
/**	Function: AppendTextBoxText									**/
/**	Summary	: Append TextBox Text								**/
/**	Param	: TextBox *this										**/
/**			: const gchar *text									**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/*****************************************************************/
void AppendTextBoxText(TextBox *this, const gchar *text)
{
	gtk_entry_append_text(GTK_ENTRY(this->obj), text);
}

/*****************************************************************/
/**	Function: GetTextBoxText									**/
/**	Summary	: Get TextBox Text									**/
/**	Param	: TextBox *this										**/
/**	Return	: TextBox Text										**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/*****************************************************************/
const gchar *GetTextBoxText(TextBox *this)
{
	return gtk_entry_get_text(GTK_ENTRY(this->obj));
}

