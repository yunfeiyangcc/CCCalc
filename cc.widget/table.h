/*****************************************************************/
/**	File	: table.h											**/
/**	Summary	: CcWgtTable Object	Define							**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.21										**/
/**			: 2014.12.28										**/
/**			: 2015.01.02										**/
/*****************************************************************/

#ifndef	_TABLE_H_
#define	_TABLE_H_

/*****************************************************************/
/** include head file											**/
/*****************************************************************/
#include "common.h"

/*****************************************************************/
/** Define														**/
/*****************************************************************/

/*****************************************************************/
/**	Object  : CcWgtTable 										**/
/**	Summary	: CcWgtTable Object	Define							**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.21										**/
/**			: 2014.12.28										**/
/**			: 2015.01.02										**/
/*****************************************************************/
typedef class _CcWgtTable
{
	GtkWidget* obj;						// CcWgtTable Object

	void (*Init)(class _CcWgtTable *this, guint rows, guint cols, gboolean homogeneous);
	void (*addChild)(class _CcWgtTable *this, GtkWidget *child,
					guint left, guint right, guint top, guint bottom, 
					GtkAttachOptions xoptions, GtkAttachOptions yoptions, 
					guint xpadding, guint ypadding);
} CcWgtTable;

/*****************************************************************/
/**	Summary	: Function Declare									**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.21										**/
/**			: 2014.12.28										**/
/**			: 2015.01.02										**/
/*****************************************************************/
CcWgtTable *newCcWgtTable();										// New CcWgtTable Object
void InitCcWgtTable(CcWgtTable *this,
			guint rows, guint cols, gboolean homogeneous);			// CcWgtTable object
void CcWgtTableAddChild(CcWgtTable *this, GtkWidget *child,
			guint left, guint right, guint top, guint bottom, 
			GtkAttachOptions xoptions, GtkAttachOptions yoptions, 
			guint xpadding, guint ypadding);						// Add Child


#endif	/* _TABLE_H_ */


