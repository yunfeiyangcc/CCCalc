/*****************************************************************/
/**	File	: window.h											**/
/**	Summary	: Window Object Define								**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/*****************************************************************/

#ifndef	_WINDOW_H_
#define	_WINDOW_H_

/*****************************************************************/
/** include head file											**/
/*****************************************************************/
#include "common.h"

/*****************************************************************/
/** Define														**/
/*****************************************************************/

/*****************************************************************/
/**	Object  : Window 											**/
/**	Summary	: Window Object Define								**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/*****************************************************************/
typedef class _Window
{
	GtkWidget* obj;						// Window Object
	
	void (*Init)(class _Window *this, gint argc, gchar *argv[], GtkWindowType windowType);
	void (*SetTitle)(class _Window *this, gchar *title);
	const gchar *(*GetTitle)(class _Window *this);
	void (*SetPosition)(class _Window *this, GtkWindowPosition position);
	void (*SetSize)(class _Window *this, gint width, gint height);
	void (*Show)(class _Window *this);

} Window;

/*****************************************************************/
/**	Summary	: Function Declare									**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/*****************************************************************/
Window *newWindow();											// New Window Object
void InitWindow(Window *this, gint argc,
				gchar *argv[], GtkWindowType windowType);		// Initialize Window object
void SetWindowTitle(Window *this, gchar *title);				// Set Window Title
const gchar *GetWindowTitle(Window *this);						// Get Window Title
void SetWindowPosition(Window *this, GtkWindowPosition position);// Set Window Position
void SetWindowSize(Window *this, gint width, gint height);		// Set Window Size
void ShowWindow(Window *this);									// Show Window

#endif	/* _WINDOW_H_ */


