NAME=		arrow
MAJOR=		0
MINOR=		1
VERSION=	$(MAJOR).$(MINOR)

CC=		clang
CFLAGS=		-O2 -std=c99 -march=native -Wall -Wextra -Werror
LDFLAGS=	-Wl,-lm

SRCDIR=		src
OBJDIR=		obj
LIBDIR=		lib
TESTDIR=	test
BINDIR=		bin

SOURCES=	$(wildcard $(SRCDIR)/*.c)
OBJECTS=	$(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o, $(SOURCES))

SLIB=		lib$(NAME).a
DLIB=		lib$(NAME).so

TESTSOURCES=	$(wildcard $(TESTDIR)/*_test.c)
TESTBINS=	$(patsubst $(TESTDIR)/%.c,$(BINDIR)/%, $(TESTSOURCES))
TESTCFLAGS=	$(CFLAGS) -Isrc/ -Wno-unused-function -Wno-unused-variable

all: $(DLIB) $(SLIB)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c -fPIC -o $@ $<

$(DLIB): $(OBJECTS)
	mkdir -p $(LIBDIR)
	$(CC) -shared -o $(LIBDIR)/$(DLIB).$(VERSION) $(OBJECTS)

$(SLIB): $(OBJECTS)
	mkdir -p $(LIBDIR)
	ar cr $(LIBDIR)/$(SLIB) $(OBJECTS)

$(BINDIR)/%: $(TESTDIR)/%.c $(OBJECTS)
	mkdir -p $(BINDIR)
	$(CC) $(TESTCFLAGS) -o $@ $< $(OBJECTS) $(LDFLAGS)

test: $(TESTBINS)
	find $(BINDIR) -iname "*_test" -execdir ./{} \;

make clean:
	rm -f $(OBJECTS) $(LIBDIR)/$(DLIB).$(VERSION) $(LIBDIR)/$(SLIB) $(TESTBINS)
