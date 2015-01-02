
object = *.o
gtkLibs = `pkg-config --libs --cflags gtk+-2.0`
ccWidget = cc.widget

CalcMain :	menuitem.o menu.o rootmenu.o menubar.o button.o textbox.o table.o window.o gui.o CalcMain.o
	gcc ${object} -o CalcMain.out ${gtkLibs}

# common.o
#common.o : ${ccWidget}/common.c
#	gcc -c ${ccWidget}/common.c -o common.o

# Button.o
button.o : ${ccWidget}/button.c
	gcc -c ${ccWidget}/button.c -o button.o ${gtkLibs}

# TextBox.o
textbox.o : ${ccWidget}/textbox.c
	gcc -c ${ccWidget}/textbox.c -o textbox.o ${gtkLibs}

# Table.o
table.o : ${ccWidget}/table.c
	gcc -c ${ccWidget}/table.c -o table.o ${gtkLibs}

# MenuItem.o
menuitem.o : ${ccWidget}/menuitem.c
	gcc -c ${ccWidget}/menuitem.c -o menuitem.o ${gtkLibs}

# Menu.o
menu.o : ${ccWidget}/menu.c
	gcc -c ${ccWidget}/menu.c -o menu.o ${gtkLibs}

# RootMenu.o
rootmenu.o : ${ccWidget}/rootmenu.c
	gcc -c ${ccWidget}/rootmenu.c -o rootmenu.o ${gtkLibs}

# MenuBar.o
menubar.o : ${ccWidget}/menubar.c
	gcc -c ${ccWidget}/menubar.c -o menubar.o ${gtkLibs}

# Window.o
window.o : ${ccWidget}/window.c
	gcc -c ${ccWidget}/window.c -o window.o ${gtkLibs}

# GUI.o
gui.o : gui.c
	gcc -c gui.c -o gui.o ${gtkLibs}

# CalcMian.o
CalcMain.o : CalcMain.c
	gcc -c CalcMain.c -o CalcMain.o ${gtkLibs}


.PHONY: clean
clean:
	rm *.o
	rm *.out
