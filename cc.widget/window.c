/*****************************************************************/
/**	File	: window.c											**/
/**	Summary	: CcWgtWindow Object								**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/**			: 2015.01.02										**/
/**			: 2015.01.03										**/
/*****************************************************************/

/*****************************************************************/
/** include head file											**/
/*****************************************************************/
#include "window.h"

/*****************************************************************/
/**	Function: newCcWgtWindow									**/
/**	Summary	: New CcWgtWindow Object							**/
/**	Param	: none												**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/**			: 2015.01.02										**/
/*****************************************************************/
CcWgtWindow *newCcWgtWindow()
{
	CcWgtWindow *window = (CcWgtWindow *)malloc(sizeof(CcWgtWindow));

	if ( (CcWgtWindow *)NULL == window )
	{
		DEBUG_LOG("new CcWgtWindow error");
		exit(1);
	}

	window->Init		= InitCcWgtWindow;
	window->SetTitle	= SetCcWgtWindowTitle;
	window->GetTitle	= GetCcWgtWindowTitle;
	window->SetPosition	= SetCcWgtWindowPosition;
	window->SetSize		= SetCcWgtWindowSize;
	window->AddChild	= CcWgtWindowAddChild;
	window->Show		= ShowCcWgtWindow;

	return window;
}

/*****************************************************************/
/**	Function: InitCcWgtWindow									**/
/**	Summary	: Initialize CcWgtWindow object						**/
/**	Param	: CcWgtWindow *this									**/
/**			: gint argc											**/
/**			: gchar *argv[]										**/
/**			: GtkWindowType windowType							**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/**			: 2015.01.02										**/
/*****************************************************************/
void InitCcWgtWindow(CcWgtWindow *this, gint argc, gchar *argv[], GtkWindowType windowType)
{
	gtk_init(&argc, &argv);

	this->obj = gtk_window_new(windowType);
}

/*****************************************************************/
/**	Function: SetCcWgtWindowTitle								**/
/**	Summary	: Set CcWgtWindow Title								**/
/**	Param	: CcWgtWindow *this									**/
/**			: const gchar *title								**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/**			: 2015.01.02										**/
/**			: 2015.01.03										**/
/*****************************************************************/
void SetCcWgtWindowTitle(CcWgtWindow *this, const gchar *title)
{
	gtk_window_set_title(GTK_WINDOW(this->obj), title);
}

/*****************************************************************/
/**	Function: GetCcWgtWindowTitle								**/
/**	Summary	: Get CcWgtWindow Title								**/
/**	Param	: CcWgtWindow *this									**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/**			: 2015.01.02										**/
/*****************************************************************/
const gchar *GetCcWgtWindowTitle(CcWgtWindow *this)
{
	return gtk_window_get_title(GTK_WINDOW(this->obj));
}

/*****************************************************************/
/**	Function: SetCcWgtWindowPosition							**/
/**	Summary	: Set CcWgtWindow Position							**/
/**	Param	: CcWgtWindow *this									**/
/**			: GtkWindowPosition position						**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/**			: 2015.01.02										**/
/*****************************************************************/
void SetCcWgtWindowPosition(CcWgtWindow *this, GtkWindowPosition position)
{
	gtk_window_set_position(GTK_WINDOW(this->obj), position);
}

/*****************************************************************/
/**	Function: SetCcWgtWindowSize								**/
/**	Summary	: Set CcWgtWindow Size								**/
/**	Param	: CcWgtWindow *this									**/
/**			: gint width										**/
/**			: gint height										**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/**			: 2015.01.02										**/
/*****************************************************************/
void SetCcWgtWindowSize(CcWgtWindow *this, gint width, gint height)
{
	gtk_widget_set_usize(this->obj, width, height);
}

/*****************************************************************/
/**	Function: CcWgtWindowAddChild								**/
/**	Summary	: CcWgtWindow Add Child								**/
/**	Param	: CcWgtWindow *this									**/
/**			: GtkWidget *obj									**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2015.01.03										**/
/*****************************************************************/
void CcWgtWindowAddChild(CcWgtWindow *this, GtkWidget *obj)
{
	gtk_container_add(GTK_CONTAINER(this->obj), obj);
}


/*****************************************************************/
/**	Function: ShowCcWgtWindow									**/
/**	Summary	: Show CcWgtWindow									**/
/**	Param	: CcWgtWindow *this									**/
/**	Return	: none												**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/**			: 2015.01.02										**/
/*****************************************************************/
void ShowCcWgtWindow(CcWgtWindow *this)
{
	gtk_widget_show(this->obj);
	gtk_main();
}

