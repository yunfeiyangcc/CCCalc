
object = *.o
gtkLibs = `pkg-config --libs --cflags gtk+-2.0`
ccWidgetDir = cc.widget

CalcMain :	menuitem.o menu.o rootmenu.o menubar.o button.o textbox.o table.o window.o calcbutton.o calctextbox.o calcmenubar.o calctable.o calcgui.o CalcMain.o
	gcc ${object} -o CalcMain.out ${gtkLibs}

# common.o
#common.o : ${ccWidget}/common.c
#	gcc -c ${ccWidget}/common.c -o common.o

# Button.o
button.o : ${ccWidgetDir}/button.c
	gcc -c ${ccWidgetDir}/button.c -o button.o ${gtkLibs}

# TextBox.o
textbox.o : ${ccWidgetDir}/textbox.c
	gcc -c ${ccWidgetDir}/textbox.c -o textbox.o ${gtkLibs}

# Table.o
table.o : ${ccWidgetDir}/table.c
	gcc -c ${ccWidgetDir}/table.c -o table.o ${gtkLibs}

# MenuItem.o
menuitem.o : ${ccWidgetDir}/menuitem.c
	gcc -c ${ccWidgetDir}/menuitem.c -o menuitem.o ${gtkLibs}

# Menu.o
menu.o : ${ccWidgetDir}/menu.c
	gcc -c ${ccWidgetDir}/menu.c -o menu.o ${gtkLibs}

# RootMenu.o
rootmenu.o : ${ccWidgetDir}/rootmenu.c
	gcc -c ${ccWidgetDir}/rootmenu.c -o rootmenu.o ${gtkLibs}

# MenuBar.o
menubar.o : ${ccWidgetDir}/menubar.c
	gcc -c ${ccWidgetDir}/menubar.c -o menubar.o ${gtkLibs}

# Window.o
window.o : ${ccWidgetDir}/window.c
	gcc -c ${ccWidgetDir}/window.c -o window.o ${gtkLibs}


# CalcButton.o
calcbutton.o : calcbutton.c
	gcc -c calcbutton.c -o calcbutton.o ${gtkLibs}

# CalcTextBox.o
calctextbox.o : calctextbox.c
	gcc -c calctextbox.c -o calctextbox.o ${gtkLibs}

# CalcMenuBar.o
calcmenubar.o : calcmenubar.c
	gcc -c calcmenubar.c -o calcmenubar.o ${gtkLibs}

# CalcTable.o
calctable.o : calctable.c
	gcc -c calctable.c -o calctable.o ${gtkLibs}

# CalcGui.o
calcgui.o : calcgui.c
	gcc -c calcgui.c -o calcgui.o ${gtkLibs}

# CalcMian.o
CalcMain.o : CalcMain.c
	gcc -c CalcMain.c -o CalcMain.o ${gtkLibs}


.PHONY: clean
clean:
	rm *.o
	rm *.out
