/*****************************************************************/
/**	File	: table.h											**/
/**	Summary	: CcWgtTable Object	Define							**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.21										**/
/**			: 2014.12.28										**/
/**			: 2015.01.02										**/
/**			: 2015.01.03										**/
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
/**			: 2015.01.03										**/
/*****************************************************************/
typedef class _CcWgtTable
{
	GtkWidget* obj;						// CcWgtTable Object

	void (*Init)(class _CcWgtTable *this, guint rows, guint cols, gboolean homogeneous);
	void (*addChild)(class _CcWgtTable *this, GtkWidget *child,
					guint left, guint right, guint top, guint bottom, 
					GtkAttachOptions xoptions, GtkAttachOptions yoptions, 
					guint xpadding, guint ypadding);
	void (*SetPosition)(class _CcWgtTable *this, gint x, gint y);
	void (*SetSize)(class _CcWgtTable *this, gint width, gint height);
	void (*Show)(class _CcWgtTable *this);
	void (*ShowAll)(class _CcWgtTable *this);
} CcWgtTable;

/*****************************************************************/
/**	Summary	: Function Declare									**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.21										**/
/**			: 2014.12.28										**/
/**			: 2015.01.02										**/
/**			: 2015.01.03										**/
/*****************************************************************/
CcWgtTable *newCcWgtTable();										// New CcWgtTable Object
void InitCcWgtTable(CcWgtTable *this,
			guint rows, guint cols, gboolean homogeneous);			// CcWgtTable object
void CcWgtTableAddChild(CcWgtTable *this, GtkWidget *child,
			guint left, guint right, guint top, guint bottom, 
			GtkAttachOptions xoptions, GtkAttachOptions yoptions, 
			guint xpadding, guint ypadding);						// Add Child
void SetCcWgtTablePosition(CcWgtTable *this, gint x, gint y);		// Set CcWgtTable Position
void SetCcWgtTableSize(CcWgtTable *this, gint width, gint height);	// Set CcWgtTable Size
void CcWgtTableShow(CcWgtTable *this);								// CcWgtTable Show
void CcWgtTableShowAll(CcWgtTable *this);							// CcWgtTable Show All


#endif	/* _TABLE_H_ */


