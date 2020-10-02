TARGET=all.out

OBJS=test.o 
TOPDIR=${PWD}

CFLAGS=-I${TOPDIR}/inc

all:$(TARGET)

$(TARGET):$(OBJS)
	gcc $^ -o $@ -shared -Lsrc -lmystr -lmyutils -lmasking

%.o:src/%.c

test.o:test.c

clean:
	rm -rf test.o all.out

