CC = gcc
CFLAGS = -Wall -g -Wno-unused-function
LDLIBS = -lm

test: tsp.c utils.c
	$(CC) $(CFLAGS) $(LDLIBS) $^ -o $@

clean:
	rm *~
	rm test
