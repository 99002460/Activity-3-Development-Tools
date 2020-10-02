TARGET=all.out

OBJS=test.o 
TOPDIR=${PWD}

CFLAGS=-I${TOPDIR}/inc

all:$(TARGET)

$(TARGET):$(OBJS)
	gcc $^ -o $@ -static -Lsrc -lmystr -lmyutils -lmasking

%.o:src/%.c

test.o:test.c

clean:
	rm -rf *.o *.out

