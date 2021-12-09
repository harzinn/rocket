compile:
	gcc -g -Wall main.c -o bin/debug/main_debug
run:
	./bin/debug/main_debug
win32:
	i686-w64-mingw32-gcc -g -Wall main.c -o bin/debug/main_debug_win32.exe
win64:
	x86_64-w64-mingw32-gcc -g -Wall main.c -o bin/debug/main_debug_win64.exe
clean:
	rm bin/debug/*
