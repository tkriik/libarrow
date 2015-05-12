CC=		clang
CFLAGS=		-O2 -g -march=native -Wall -Wextra -Werror
LDFLAGS=	-Wl,-lm

SRCS=		vector.c matrix.c quaternion.c
OBJS=		vector.o matrix.o quaternion.o

SLIB=		libarrow.a
DLIB=		libarrow.so

TEST=		arrow_test
TESTFLAGS=	-Wno-unused-function -Wno-unused-variable

all: $(DLIB) $(SLIB)

$(DLIB): $(SRCS)
	$(CC) $(CFLAGS) -c -fpic $(SRCS)
	$(CC) -shared -o $(DLIB) $(OBJS)

$(SLIB): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)
	ar cr $(SLIB) $(OBJS)

test: $(SRCS)
	$(CC) $(CFLAGS) $(TESTFLAGS) -o $(TEST) $(TEST).c $(SRCS) $(LDFLAGS)
	./$(TEST)

make clean:
	rm -f $(SLIB) $(DLIB) $(OBJS) $(TEST)
