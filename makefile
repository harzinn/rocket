compile:
	gcc -g -Wall main.c -o bin/debug/main_debug

run:
	./bin/debug/main_debug

clean:
	rm bin/debug/main_debug
