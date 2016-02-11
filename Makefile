CC = clang
CPPFLAGS =
CPFLAGS = -Wall -Wextra -pedantic -std=c99 -g3
LDLIBS=
SRC = main.c
OBJ= ${SRC: .c=.o}
main: ${OBJ}
clean: 
	rm -f *~ *.o
	rm -f main
	rm -f tests
