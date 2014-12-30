
object = *.o
gtkLibs = `pkg-config --libs --cflags gtk+-2.0`

CalcMain : CalcMain.o gui.o window.o table.o textbox.o button.o
	gcc ${object} -o CalcMain.out ${gtkLibs}

CalcMain.o : CalcMain.c
	gcc -c CalcMain.c -o CalcMain.o ${gtkLibs}

# GUI.o
gui.o : gui.c
	gcc -c gui.c -o gui.o ${gtkLibs}

# Window.o
window.o : window.c
	gcc -c window.c -o window.o ${gtkLibs}

# Table.o
table.o : table.c
	gcc -c table.c -o table.o ${gtkLibs}

# TextBox.o
textbox.o : textbox.c
	gcc -c textbox.c -o textbox.o ${gtkLibs}

# Button.o
button.o : button.c
	gcc -c button.c -o button.o ${gtkLibs}

# common.o
#common.o : common.c
#	gcc -c common.c -o common.o

.PHONY: clean
clean:
	rm *.o
	rm *.out
