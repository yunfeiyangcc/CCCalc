/*****************************************************************/
/**	File	: textbox.c											**/
/**	Summary	: CcWgtTextBox Object								**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/**			: 2015.01.02										**/
/*****************************************************************/

/*****************************************************************/
/** include head file											**/
/*****************************************************************/
#include "textbox.h"

/*****************************************************************/
/**	Function: newCcWgtTextBox									**/
/**	Summary	: New CcWgtTextBox Object							**/
/**	Param	: none												**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/**			: 2015.01.02										**/
/*****************************************************************/
CcWgtTextBox *newCcWgtTextBox()
{
	CcWgtTextBox *ccWgtTextbox = (CcWgtTextBox *)malloc(sizeof(CcWgtTextBox));

	if ( (CcWgtTextBox *)NULL == ccWgtTextbox )
	{
		DEBUG_LOG("new CcWgtTextBox error");
		exit(1);
	}

	ccWgtTextbox->Init			= InitCcWgtTextBox;
	ccWgtTextbox->SetEditable	= SetCcWgtTextBoxEditable;
	ccWgtTextbox->SetAlign		= SetCcWgtTextBoxAlign;
	ccWgtTextbox->SetText		= SetCcWgtTextBoxText;
	ccWgtTextbox->AppendText	= AppendCcWgtTextBoxText;
	ccWgtTextbox->GetText		= GetCcWgtTextBoxText;
	ccWgtTextbox->SetPosition	= SetCcWgtTextBoxPosition;
	ccWgtTextbox->SetSize		= SetCcWgtTextBoxSize;
	ccWgtTextbox->Show			= CcWgtTextBoxTextShow;

	return ccWgtTextbox;
}

/*****************************************************************/
/**	Function: InitCcWgtTextBox									**/
/**	Summary	: Initialize CcWgtTextBox object					**/
/**	Param	: CcWgtTextBox *this								**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/**			: 2015.01.02										**/
/*****************************************************************/
void InitCcWgtTextBox(CcWgtTextBox *this)
{
	this->obj = gtk_entry_new();
}
/*****************************************************************/
/**	Function: SetCcWgtTextBoxEditable							**/
/**	Summary	: Set CcWgtTextBox Editable							**/
/**	Param	: CcWgtTextBox *this								**/
/**			: gboolean editable									**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/**			: 2015.01.02										**/
/*****************************************************************/
void SetCcWgtTextBoxEditable(CcWgtTextBox *this, gboolean editable)
{
	GTK_ENTRY(this->obj)->editable = editable;
}

/*****************************************************************/
/**	Function: SetCcWgtTextBoxAlign								**/
/**	Summary	: Set CcWgtTextBox Align							**/
/**	Param	: CcWgtTextBox *this								**/
/**			: gfloat align										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/**			: 2015.01.02										**/
/*****************************************************************/
void SetCcWgtTextBoxAlign(CcWgtTextBox *this, gfloat align)
{
//	GTK_ENTRY(this->obj)->xalign = (gfloat)align;
}

/*****************************************************************/
/**	Function: SetCcWgtTextBoxText								**/
/**	Summary	: Set CcWgtTextBox Text								**/
/**	Param	: CcWgtTextBox *this								**/
/**			: const gchar *text									**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/**			: 2015.01.02										**/
/*****************************************************************/
void SetCcWgtTextBoxText(CcWgtTextBox *this, const gchar *text)
{
	gtk_entry_set_text(GTK_ENTRY(this->obj), text);
}

/*****************************************************************/
/**	Function: AppendCcWgtTextBoxText							**/
/**	Summary	: Append CcWgtTextBox Text							**/
/**	Param	: CcWgtTextBox *this								**/
/**			: const gchar *text									**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/**			: 2015.01.02										**/
/*****************************************************************/
void AppendCcWgtTextBoxText(CcWgtTextBox *this, const gchar *text)
{
	gtk_entry_append_text(GTK_ENTRY(this->obj), text);
}

/*****************************************************************/
/**	Function: GetCcWgtTextBoxText								**/
/**	Summary	: Get CcWgtTextBox Text								**/
/**	Param	: CcWgtTextBox *this								**/
/**	Return	: CcWgtTextBox Text									**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/**			: 2015.01.02										**/
/*****************************************************************/
const gchar *GetCcWgtTextBoxText(CcWgtTextBox *this)
{
	return gtk_entry_get_text(GTK_ENTRY(this->obj));
}

/*****************************************************************/
/**	Function: SetCcWgtTextBoxPosition							**/
/**	Summary	: Set CcWgtTextBox Position							**/
/**	Param	: CcWgtTextBox *this								**/
/**			: gint x											**/
/**			: gint y											**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.03										**/
/*****************************************************************/
void SetCcWgtTextBoxPosition(CcWgtTextBox *this, gint x, gint y)
{
	gtk_widget_set_usize(this->obj, x, y);
}

/*****************************************************************/
/**	Function: SetCcWgtTextBoxSize								**/
/**	Summary	: Set CcWgtTextBox Size								**/
/**	Param	: CcWgtTextBox *this								**/
/**			: gint width										**/
/**			: gint height										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.03										**/
/*****************************************************************/
void SetCcWgtTextBoxSize(CcWgtTextBox *this, gint width, gint height)
{
	gtk_widget_set_usize(this->obj, width, height);
}

/*****************************************************************/
/**	Function: CcWgtTextBoxTextShow								**/
/**	Summary	: CcWgtTextBox Show									**/
/**	Param	: CcWgtTextBox *this								**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.02										**/
/*****************************************************************/
void CcWgtTextBoxTextShow(CcWgtTextBox *this)
{
	gtk_widget_show(this->obj);
}
