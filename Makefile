CC = gcc
CFLAGS = -Wall
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

all: main

main: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f hello $(OBJS)