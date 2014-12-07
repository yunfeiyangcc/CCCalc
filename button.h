/*****************************************************************/
/**	Object  : Button 											**/
/**	author	: wangchunchun										**/
/**	date	: 2014.12.06										**/
/*****************************************************************/
typedef class _Button
{
	GtkWidget* obj;

	void (*Init)(class _Button *this);
	void (*AddEventListener)(GtkWidget* obj, Gcallback callBackFunc);
} Button;


Button *newButton();
