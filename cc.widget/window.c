/*****************************************************************/
/**	File	: window.c											**/
/**	Summary	: Window Object										**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/*****************************************************************/

/*****************************************************************/
/** include head file											**/
/*****************************************************************/
#include "window.h"

/*****************************************************************/
/**	Function: newWindow											**/
/**	Summary	: New Window Object									**/
/**	Param	: none												**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/*****************************************************************/
Window *newWindow()
{
	Window *window = (Window *)malloc(sizeof(Window));

	if ( (Window *)NULL == window )
	{
		DEBUG_LOG("new Window error");
		exit(1);
	}

	window->Init		= InitWindow;
	window->SetTitle	= SetWindowTitle;
	window->GetTitle	= GetWindowTitle;
	window->SetPosition	= SetWindowPosition;
	window->SetSize		= SetWindowSize;
	window->Show		= ShowWindow;

	return window;
}

/*****************************************************************/
/**	Function: InitWindow										**/
/**	Summary	: Initialize Window object							**/
/**	Param	: Window *this										**/
/**			: gint argc											**/
/**			: gchar *argv[]										**/
/**			: GtkWindowType windowType							**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/*****************************************************************/
void InitWindow(Window *this, gint argc, gchar *argv[], GtkWindowType windowType)
{
	gtk_init(&argc, &argv);

	this->obj = gtk_window_new(windowType);
}

/*****************************************************************/
/**	Function: SetWindowTitle									**/
/**	Summary	: Set Window Title									**/
/**	Param	: Window *this										**/
/**			: gchar *title										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/*****************************************************************/
void SetWindowTitle(Window *this, gchar *title)
{
	gtk_window_set_title(GTK_WINDOW(this->obj), title);
}

/*****************************************************************/
/**	Function: GetWindowTitle									**/
/**	Summary	: Get Window Title									**/
/**	Param	: Window *this										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/*****************************************************************/
const gchar *GetWindowTitle(Window *this)
{
	return gtk_window_get_title(GTK_WINDOW(this->obj));
}

/*****************************************************************/
/**	Function: SetWindowPosition									**/
/**	Summary	: Set Window Position								**/
/**	Param	: Window *this										**/
/**			: GtkWindowPosition position						**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/*****************************************************************/
void SetWindowPosition(Window *this, GtkWindowPosition position)
{
	gtk_window_set_position(GTK_WINDOW(this->obj), position);
}

/*****************************************************************/
/**	Function: SetWindowSize										**/
/**	Summary	: Set Window Size									**/
/**	Param	: Window *this										**/
/**			: gint width										**/
/**			: gint height										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/*****************************************************************/
void SetWindowSize(Window *this, gint width, gint height)
{
	gtk_widget_set_usize(this->obj, width, height);
}

/*****************************************************************/
/**	Function: ShowWindow										**/
/**	Summary	: Show Window										**/
/**	Param	: Window *this										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/*****************************************************************/
void ShowWindow(Window *this)
{
	gtk_widget_show(this->obj);
	gtk_main();
}

