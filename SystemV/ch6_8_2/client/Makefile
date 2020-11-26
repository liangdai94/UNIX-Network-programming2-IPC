SOURCES := $(wildcard *.c)
#TARGETS := $(patsubst %.c, %, $(SOURCES))

#all:$(TARGETS)

#$(TARGETS):%.o:%.c
client:$(SOURCES)
	$(CC) $^ $(DEPENDS) $(FLAGS) -o $@ -I$(HEADDIR)

.PHONY:clean

clean:
	-rm -rf *.o
