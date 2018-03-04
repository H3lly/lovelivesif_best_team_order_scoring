CC = gcc
CFLAGS = -Wall -g -Wno-unused-function
LDLIBS = -lm

test: test.c
	$(CC) $(CFLAGS) $(LDLIBS) $^ -o $@

clean:
	rm *~
	rm test
