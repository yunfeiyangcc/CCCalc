/*****************************************************************/
/**	File	: window.h											**/
/**	Summary	: CcWgtWindow Object Define							**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/**			: 2015.01.02										**/
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
/**	Object  : CcWgtWindow 										**/
/**	Summary	: CcWgtWindow Object Define							**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/**			: 2015.01.02										**/
/*****************************************************************/
typedef class _CcWgtWindow
{
	GtkWidget* obj;						// CcWgtWindow Object
	
	void (*Init)(class _CcWgtWindow *this, gint argc, gchar *argv[], GtkWindowType windowType);
	void (*SetTitle)(class _CcWgtWindow *this, gchar *title);
	const gchar *(*GetTitle)(class _CcWgtWindow *this);
	void (*SetPosition)(class _CcWgtWindow *this, GtkWindowPosition position);
	void (*SetSize)(class _CcWgtWindow *this, gint width, gint height);
	void (*Show)(class _CcWgtWindow *this);

} CcWgtWindow;

/*****************************************************************/
/**	Summary	: Function Declare									**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.30										**/
/**			: 2015.01.02										**/
/*****************************************************************/
CcWgtWindow *newCcWgtWindow();												// New CcWgtWindow Object
void InitCcWgtWindow(CcWgtWindow *this, gint argc,
				gchar *argv[], GtkWindowType windowType);					// Initialize CcWgtWindow object
void SetCcWgtWindowTitle(CcWgtWindow *this, gchar *title);					// Set CcWgtWindow Title
const gchar *GetCcWgtWindowTitle(CcWgtWindow *this);						// Get CcWgtWindow Title
void SetCcWgtWindowPosition(CcWgtWindow *this, GtkWindowPosition position);	// Set CcWgtWindow Position
void SetCcWgtWindowSize(CcWgtWindow *this, gint width, gint height);		// Set CcWgtWindow Size
void ShowCcWgtWindow(CcWgtWindow *this);									// Show CcWgtWindow

#endif	/* _WINDOW_H_ */


