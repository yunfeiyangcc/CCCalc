/*****************************************************************/
/**	File	: table.c											**/
/**	Summary	: Table Object										**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.21										**/
/**			: 2014.12.28										**/
/*****************************************************************/

/*****************************************************************/
/** include head file											**/
/*****************************************************************/
#include "table.h"

/*****************************************************************/
/**	Function: newTable											**/
/**	Summary	: New Table Object									**/
/**	Param	: none												**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.21										**/
/**			: 2014.12.28										**/
/*****************************************************************/
Table *newTable()
{
	Table *table = (Table *)malloc(sizeof(Table));

	if ( (Table *)NULL == table )
	{
		DEBUG_LOG("new Table error");
		exit(1);
	}

	table->Init = InitTable;
	table->addChild = tableAddChild;

	return table;
}


/*****************************************************************/
/**	Function: InitTable											**/
/**	Summary	: Initialize Table object							**/
/**	Param	: Table *this										**/
/**			: guint rows										**/
/**			: guint cols										**/
/**			: gboolean rohomogeneousws							**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.06										**/
/**			: 2014.12.07										**/
/**			: 2014.12.28										**/
/*****************************************************************/
void InitTable(Table *this, guint rows, guint cols, gboolean homogeneous)
{
	this->obj = gtk_table_new(rows, cols, homogeneous);
}

/*****************************************************************/
/**	Function: tableAddChild										**/
/**	Summary	: Table Add Child									**/
/**	Param	: Table *this										**/
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
/*****************************************************************/
void tableAddChild(Table *this, GtkWidget *child, 
			guint left, guint right, guint top, guint bottom, 
			GtkAttachOptions xoptions, GtkAttachOptions yoptions, 
			guint xpadding, guint ypadding)
{
	gtk_table_attach(GTK_TABLE(this->obj), child, left, right, top, bottom, 
					(GtkAttachOptions)xoptions, (GtkAttachOptions)yoptions, xpadding, ypadding);
}

