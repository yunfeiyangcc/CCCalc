/*****************************************************************/
/**	File	: common.h											**/
/**	Summary	: Common Define										**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.07										**/
/*****************************************************************/

#ifndef	_COMMON_H_
#define	_COMMON_H_

#include <gtk/gtk.h>


/*****************************************************************/
/** 宏定义														**/
/*****************************************************************/
#define DEBUG_PRINT_ON	1		// LOG打印到屏幕上的开关
#define DEBUG_LOG_ON	1		// LOG输出到文件中的开关


// 打印到屏幕上
#if DEBUG_PRINT_ON
#define DEBUG_PRINT(str) printf("%s\t\t file:%s, funcion:%s, line:%d\n", str, __FILE__, __FUNCTION__, __LINE__)
#else
#define DEBUG_PRINT(str)
#endif

// 输出到文件中
#if DEBUG_LOG_ON
#define DEBUG_LOG(str) printf("%s\t\t file:%s, funcion:%s, line:%d\n", str, __FILE__, __FUNCTION__, __LINE__)
#else
#define DEBUG_LOG(str)
#endif


#define class struct
#define new 
#define Button() newButton()

/*****************************************************************/
/**	Summary	: CallBack Function Declare							**/
/*****************************************************************/
typedef void (*CallBack)(GtkWidget *widget, gpointer func_data);



#endif	/*	_COMMON_H_	*/

