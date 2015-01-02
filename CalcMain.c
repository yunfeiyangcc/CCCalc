#include <stdio.h>
#include "cc.widget/common.h"
#include "cc.widget/button.h"
#include "cc.widget/table.h"
#include "calcmenubar.h"

void btnCallBack(GtkWidget *widget, gpointer func_data)
{
    DEBUG_PRINT("button!");
    DEBUG_PRINT((const char *)func_data);
}


int main(int argc, char *argv[])
{

    GtkWidget *window;
//	CcWgtButton *button;
//	CcWgtTable *table;

	gtk_init(&argc, &argv);

	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title(GTK_WINDOW(window), g_locale_to_utf8("用户登录", -1, NULL, NULL, NULL));


	gtk_widget_set_uposition(window, 400, 200);
	gtk_widget_set_usize(window, 400, 300);

//	table = new Table();
//	table->Init(table, 3, 3, FALSE);

//	button = new Button();
//	button->Init(button, "button");
//	button->AddOnClickedListener(button->obj, btnCallBack, (void *)"123456789");

	//	gtk_container_add(GTK_CONTAINER(window), button->obj);

	CalcMenuBarInit();
	CalcMenuBarShow();
	gtk_container_add(GTK_CONTAINER(window), calcMenuBar->obj);
	gtk_widget_show_all(window);


	gtk_main();


    return 0;
}
