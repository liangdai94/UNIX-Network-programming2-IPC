SOURCE=$(wildcard *.c)
TARGETS=$(patsubst %.c, %, $(SOURCE))

CC=gcc
FLAGS=-Wall -g -lrt -I../include

all:$(TARGETS)

$(TARGETS):%:%.c
        $(CC) $< $(FLAGS) -o $@

.PHONY:clean all

clean:
        -rm -rf $(TARGETS)
