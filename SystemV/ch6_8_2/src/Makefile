SOURCES := $(wildcard *.c)
TARGETS := $(patsubst %.c, %.o, $(SOURCES))

all:$(TARGETS)

$(TARGETS):%.o:%.c
	$(CC) -c $< $(FLAGS) -o $@  -I$(HEADDIR)

clean:
	-rm -rf *.o
