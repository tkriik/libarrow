NAME=		arrow
MAJOR=		0
MINOR=		1
VERSION=	$(MAJOR).$(MINOR)

CC=		clang
CFLAGS=		-O2 -std=gnu99 -march=native -Wall -Wextra -Werror
LDFLAGS=	-Wl,-lm

SRCDIR=		src
OBJDIR=		obj
LIBDIR=		lib

SOURCES=	$(wildcard $(SRCDIR)/*.c)
OBJECTS=	$(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o, $(SOURCES))

SLIB=		lib$(NAME).a
DLIB=		lib$(NAME).so.$(VERSION)

all: $(DLIB) $(SLIB)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c -fPIC -o $@ $<

$(DLIB): $(OBJECTS)
	mkdir -p $(LIBDIR)
	$(CC) -shared -o $(LIBDIR)/$(DLIB) $(OBJECTS)

$(SLIB): $(OBJECTS)
	mkdir -p $(LIBDIR)
	ar cr $(LIBDIR)/$(SLIB) $(OBJECTS)

clean:
	rm -f $(OBJECTS) $(LIBDIR)/$(DLIB) $(LIBDIR)/$(SLIB)
