MAJOR=		0
MINOR=		1
VERSION=	$(MAJOR).$(MINOR)

CC=		cc
CFLAGS=		-O2 -ansi -pedantic -march=native -Wall -Wextra -Werror
LDFLAGS=	-Wl,-lm

SOURCES=	basic.c	\
		vector.c \
		matrix.c \
		quaternion.c

OBJECTS=	basic.o \
		vector.o \
		matrix.o \
		quaternion.o

SLIB=		libarrow.a
DLIB=		libarrow.so.$(VERSION)

all: $(DLIB) $(SLIB)

$(DLIB): $(OBJECTS)
	$(CC) -shared -o $(DLIB) $(OBJECTS)

$(SLIB): $(OBJECTS)
	ar cr $(SLIB) $(OBJECTS)

$(OBJECTS): $(SOURCES)
	$(CC) $(CFLAGS) -c -fPIC $(SOURCES)

clean:
	rm -f $(OBJECTS) $(SLIB) $(DLIB)
