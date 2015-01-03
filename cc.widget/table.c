/*****************************************************************/
/**	File	: table.c											**/
/**	Summary	: CcWgtTable Object									**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.21										**/
/**			: 2014.12.28										**/
/**			: 2015.01.02										**/
/**			: 2015.01.03										**/
/*****************************************************************/

/*****************************************************************/
/** include head file											**/
/*****************************************************************/
#include "table.h"

/*****************************************************************/
/**	Function: newCcWgtTable										**/
/**	Summary	: New CcWgtTable Object								**/
/**	Param	: none												**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.21										**/
/**			: 2014.12.28										**/
/**			: 2015.01.02										**/
/*****************************************************************/
CcWgtTable *newCcWgtTable()
{
	CcWgtTable *ccWetTable = (CcWgtTable *)malloc(sizeof(CcWgtTable));

	if ( (CcWgtTable *)NULL == ccWetTable )
	{
		DEBUG_LOG("new CcWgtTable error");
		exit(1);
	}

	ccWetTable->Init		= InitCcWgtTable;
	ccWetTable->addChild	= CcWgtTableAddChild;
	ccWetTable->SetPosition	= SetCcWgtTablePosition;
	ccWetTable->SetSize		= SetCcWgtTableSize;
	ccWetTable->Show		= CcWgtTableShow;
	ccWetTable->ShowAll		= CcWgtTableShowAll;

	return ccWetTable;
}


/*****************************************************************/
/**	Function: InitCcWgtTable									**/
/**	Summary	: Initialize CcWgtTable object						**/
/**	Param	: CcWgtTable *this									**/
/**			: guint rows										**/
/**			: guint cols										**/
/**			: gboolean rohomogeneousws							**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.06										**/
/**			: 2014.12.07										**/
/**			: 2014.12.28										**/
/**			: 2015.01.02										**/
/*****************************************************************/
void InitCcWgtTable(CcWgtTable *this, guint rows, guint cols, gboolean homogeneous)
{
	this->obj = gtk_table_new(rows, cols, homogeneous);
}

/*****************************************************************/
/**	Function: CcWgtTableAddChild								**/
/**	Summary	: CcWgtTable Add Child								**/
/**	Param	: CcWgtTable *this									**/
/**			: GtkWidget *child									**/
/**			: guint left										**/
/**			: guint right										**/
/**			: guint top											**/
/**			: guint bottom										**/
/**			: GtkAttachOptions xoptions							**/
/**			: GtkAttachOptions yoptions							**/
/**			: guint xpadding									**/
/**			: guint ypadding									**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.28										**/
/**			: 2015.01.02										**/
/*****************************************************************/
void CcWgtTableAddChild(CcWgtTable *this, GtkWidget *child,
			guint left, guint right, guint top, guint bottom, 
			GtkAttachOptions xoptions, GtkAttachOptions yoptions, 
			guint xpadding, guint ypadding)
{
	gtk_table_attach(GTK_TABLE(this->obj), child, left, right, top, bottom, 
					(GtkAttachOptions)xoptions, (GtkAttachOptions)yoptions, xpadding, ypadding);
}

/*****************************************************************/
/**	Function: SetCcWgtTablePosition								**/
/**	Summary	: Set CcWgtTable Position							**/
/**	Param	: CcWgtTable *this									**/
/**			: gint x											**/
/**			: gint y											**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.03										**/
/*****************************************************************/
void SetCcWgtTablePosition(CcWgtTable *this, gint x, gint y)
{
	gtk_widget_set_usize(this->obj, x, y);
}

/*****************************************************************/
/**	Function: SetCcWgtTableSize									**/
/**	Summary	: Set CcWgtTable Size								**/
/**	Param	: CcWgtTable *this									**/
/**			: gint width										**/
/**			: gint height										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.03										**/
/*****************************************************************/
void SetCcWgtTableSize(CcWgtTable *this, gint width, gint height)
{
	gtk_widget_set_usize(this->obj, width, height);
}

/*****************************************************************/
/**	Function: CcWgtTableShow									**/
/**	Summary	: CcWgtTable Show									**/
/**	Param	: CcWgtTable *this									**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.03										**/
/*****************************************************************/
void CcWgtTableShow(CcWgtTable *this)
{
	gtk_widget_show(this->obj);
}

/*****************************************************************/
/**	Function: CcWgtTableShowAll									**/
/**	Summary	: CcWgtTable Show All								**/
/**	Param	: CcWgtTable *this									**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.03										**/
/*****************************************************************/
void CcWgtTableShowAll(CcWgtTable *this)
{
	gtk_widget_show_all(this->obj);
}
