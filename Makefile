SHELL = /usr/bin/env bash

compila:
	@g++ main.cpp funcs.cpp -o calc.o

clean:
	rm calc.o


