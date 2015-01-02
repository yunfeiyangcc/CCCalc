/*****************************************************************/
/**	File	: common.h											**/
/**	Summary	: Common Define										**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.07										**/
/**			: 2015.01.01										**/
/*****************************************************************/

#ifndef	_COMMON_H_
#define	_COMMON_H_

#include <gtk/gtk.h>
#include <stdlib.h>
#include <malloc.h>

/*****************************************************************/
/** Define														**/
/*****************************************************************/
#define DEBUG_PRINT_ON	1		// LOG Print to Screen
#define DEBUG_LOG_ON	1		// LOG Output to log file


// Print to Screen
#if DEBUG_PRINT_ON
#define DEBUG_PRINT(str) printf("%s\t\t file:%s, funcion:%s, line:%d\n", str, __FILE__, __FUNCTION__, __LINE__)
#else
#define DEBUG_PRINT(str)
#endif

// Output to log file
#if DEBUG_LOG_ON
#define DEBUG_LOG(str) printf("%s\t\t file:%s, funcion:%s, line:%d\n", str, __FILE__, __FUNCTION__, __LINE__)
#else
#define DEBUG_LOG(str)
#endif


#define class struct
#define new 
#define Window()	newWindow()
#define MenuBar()	newMenuBar()
#define RootMenu()	newRootMenu()
#define Menu()		newMenu()
#define MenuItem	newMenuItem()
#define Table()		newTable()
#define TextBox()	newTextBox()
#define Button()	newButton()

/*****************************************************************/
/**	Summary	: CallBack Function Declare							**/
/*****************************************************************/
typedef void (*CallBack)(GtkWidget *widget, gpointer func_data);
typedef void (*CcWgtMenuItemCallBack)(GtkMenuItem *menuitem, gpointer user_data);


#endif	/* _COMMON_H_ */

