/*****************************************************************/
/**	File	: table.c											**/
/**	Summary	: CcWgtTable Object									**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.21										**/
/**			: 2014.12.28										**/
/**			: 2015.01.02										**/
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

	ccWetTable->Init = InitCcWgtTable;
	ccWetTable->addChild = CcWgtTableAddChild;

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

