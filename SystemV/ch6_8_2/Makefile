CC=gcc
FLAGS= -Wall -g -lrt

TOPDIR := $(PWD)
SUBDIR := server client
OBJLINK = --std=c99
HEADDIR := $(TOPDIR)/include

DEPENDS := $(wildcard $(TOPDIR)/src/*.c)

export CC FLAGS HEARD OBJLINK HEADDIR DEPENDS

all: $(SUBDIR) OBJ

OBJ:
	make -C $(TOPDIR)/src

LIB := $(wildcard $(TOPDIR)/lib/*.o)
#CHECKDIR:
#       mkdir -p $(SUBDIR) $(BUBDIR)

$(SUBDIR):RUN
	make -C $@

RUN:

.PHONY:clean

clean:
