CC = gcc

SRCS = main.c

TARGET = IntegerTypeSizeOf

BUILDDIR = buildDir

COBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.c=.o))

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILDDIR})

build: $(COBJS)
	$(CC) -o $(BUILDDIR)/$(TARGET) $^

$(COBJS):$(BUILDDIR)/%.o : %.c
	$(CC) -c $< -o $@

clean:
	rm -rf $(BUILDDIR)

.SUFFIXES: .c .o