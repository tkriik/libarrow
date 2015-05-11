CC=		gcc
CFLAGS=		-O2 -std=gnu89 -g -march=native -mtune=native		\
		-Wall -Wextra -Werror -Wno-psabi
LDFLAGS=	-lm
MODULES=	vector matrix quaternion
SRCS=		$(addsuffix .c, $(MODULES))
OBJS=		$(addsuffix .o, $(MODULES))
SLIB=		libarrow.a
DLIB=		libarrow.so
TEST=		arrow_test
TESTFLAGS=	-Wno-unused-function -Wno-unused-variable

all: $(DLIB) $(SLIB)

$(DLIB): $(SRCS)
	$(CC) $(CFLAGS) -c -fpic $(SRCS) $(LDFLAGS)
	$(CC) -shared -o $(DLIB) $(OBJS)

$(SLIB): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS) $(LDFLAGS)
	ar cr $(SLIB) $(OBJS)

test: $(SRCS)
	$(CC) $(CFLAGS) $(TESTFLAGS) -o $(TEST) $(TEST).c $(SRCS) $(LDFLAGS)
	./$(TEST)

make clean:
	rm -f $(SLIB) $(DLIB) $(OBJS) $(TEST)
