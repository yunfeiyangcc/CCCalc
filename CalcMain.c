#include <stdio.h>
#include "common.h"
#include "button.h"
#include "table.h"


void btnCallBack(GtkWidget *widget, gpointer func_data)
{
	DEBUG_PRINT("button!");
	DEBUG_PRINT((const char *)func_data);
}


int main(int argc, char *argv[])
{

	gchar labelArr[] = "123456789";

	GtkWidget *window;		// 指向窗口的指针
	Button *button;
	Table *table;

	gtk_init(&argc, &argv);

	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title(GTK_WINDOW(window), g_locale_to_utf8("用户登录", -1, NULL, NULL, NULL));


	// 设置窗口位置和大小
	gtk_widget_set_uposition(window, 400, 200);
	gtk_widget_set_usize(window, 400, 300);

	table = new Table();
	table->Init(table, 3, 3, FALSE);

	button = new Button();
	button->Init(button, "button");
	button->AddOnClickedListener(button->obj, btnCallBack, (void *)"123456789");

	gtk_container_add(GTK_CONTAINER(window), button->obj);



	gtk_widget_show_all(window);

	
	gtk_main();
	return 0;
}
