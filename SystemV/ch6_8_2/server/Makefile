SOURCES := $(wildcard *.c)
#TARGETS := $(patsubst %.c, %.o, $(SOURCES))

#all:$(TARGETS)

#$(TARGETS):%.o:%.c
server:$(SOURCES)
	$(CC) $^ $(DEPENDS) $(FLAGS) -o $@ -I$(HEADDIR)

.PHONY:clean

clean:
	-rm -rf *.o
