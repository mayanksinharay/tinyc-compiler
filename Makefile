CC = gcc
CFLAGS = -Wall -g

all: tinyC

# Force y.tab.h and y.tab.c to be generated BEFORE compiling gcc
tinyC: y.tab.c lex.yy.c
	$(CC) $(CFLAGS) lex.yy.c y.tab.c -o tinyC

# Ensure bison explicitly generates y.tab.c and y.tab.h (-b y sets prefix to y)
y.tab.c y.tab.h: tinyC.y
	bison -d -v -b y tinyC.y

# lex.yy.c depends on y.tab.h being created first!
lex.yy.c: tinyC.l y.tab.h
	flex tinyC.l

clean:
	rm -f lex.yy.c y.tab.c y.tab.h y.output tinyC

test: tinyC assgn00[1268].c
	./tinyC < assgn00[1268].c
