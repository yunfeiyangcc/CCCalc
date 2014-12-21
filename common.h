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
/** �궨��														**/
/*****************************************************************/
#define DEBUG_PRINT_ON	1		// LOG��ӡ����Ļ�ϵĿ���
#define DEBUG_LOG_ON	1		// LOG������ļ��еĿ���


// ��ӡ����Ļ��
#if DEBUG_PRINT_ON
#define DEBUG_PRINT(str) printf("%s\t\t file:%s, funcion:%s, line:%d\n", str, __FILE__, __FUNCTION__, __LINE__)
#else
#define DEBUG_PRINT(str)
#endif

// ������ļ���
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

