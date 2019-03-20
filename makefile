
# I am a comment, and I want to say that the variable CC will be
# the compiler to use.

# Hey!, I am comment number 2. I want to say that CFLAGS will be the
# options I'll pass to the compiler.
CFLAGS= -Wall -Wextra -DDEBUG -g -std=c++14

all: lab4

lab4: lab4.o
	g++ $(CFLAGS) lab4.o -o lab4

lab4.o: lab4.cpp Vector.h Queue.h
	g++ $(CFLAGS) -c lab4.cpp

run: all
	./lab4

clean:
	rm -rf lab4 *.o



memcheck:
	valgrind ./lab4
