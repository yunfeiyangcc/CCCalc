/*****************************************************************/
/**	File	: table.h											**/
/**	Summary	: Table Object	Define								**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.21										**/
/**			: 2014.12.28										**/
/*****************************************************************/

#ifndef	_TABLE_H_
#define	_TABLE_H_

/*****************************************************************/
/** include head file											**/
/*****************************************************************/
#include "common.h"

/*****************************************************************/
/** ∫Í∂®“Â														**/
/*****************************************************************/

/*****************************************************************/
/**	Object  : Table 											**/
/**	Summary	: Table Object	Define								**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.21										**/
/**			: 2014.12.28										**/
/*****************************************************************/
typedef class _Table
{
	GtkWidget* obj;						// Table Object

	void (*Init)(class _Table *this, guint rows, guint cols, gboolean homogeneous);
	void (*addChild)(class _Table *this, GtkWidget *child, 
					guint left, guint right, guint top, guint bottom, 
					GtkAttachOptions xoptions, GtkAttachOptions yoptions, 
					guint xpadding, guint ypadding);
} Table;

/*****************************************************************/
/**	Summary	: Function Declare									**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.21										**/
/**			: 2014.12.28										**/
/*****************************************************************/
Table *newTable();													// New Table Object
void InitTable(Table *this, 
			guint rows, guint cols, gboolean homogeneous);			// Table object
void tableAddChild(Table *this, GtkWidget *child, 
			guint left, guint right, guint top, guint bottom, 
			GtkAttachOptions xoptions, GtkAttachOptions yoptions, 
			guint xpadding, guint ypadding);						// Add Child


#endif	/*	_TABLE_H_	*/


