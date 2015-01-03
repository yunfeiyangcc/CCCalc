/*****************************************************************/
/**	File	: common.h											**/
/**	Summary	: Common Define										**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.07										**/
/**			: 2015.01.01										**/
/**			: 2015.01.02										**/
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
#define CcWgtWindow()	newCcWgtWindow()
#define CcWgtMenuBar()	newCcWgtMenuBar()
#define CcWgtRootMenu()	newCcWgtRootMenu()
#define CcWgtMenu()		newCcWgtMenu()
#define CcWgtMenuItem()	newCcWgtMenuItem()
#define CcWgtTable()	newCcWgtTable()
#define CcWgtTextBox()	newCcWgtTextBox()
#define CcWgtButton()	newCcWgtButton()

/*****************************************************************/
/**	Summary	: CallBack Function Declare							**/
/*****************************************************************/
typedef void (*CallBack)(GtkWidget *widget, void *pData);
//typedef void (*CcWgtMenuItemCallBack)(GtkMenuItem *menuitem, void *pData);


#endif	/* _COMMON_H_ */

