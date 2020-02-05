CC = gcc

SRCS = main.c

TARGET = Integer

BUILDDIR = buildDir

COBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.c=.o))

all: clean craetedirs build

craetedirs:
	$(shell mkdir ${BUILDDIR})

build: $(COBJS)
	$(CC) -o $(BUILDDIR)/$(TARGET) $^

$(COBJS):$(BUILDDIR)/%.o : %.c
	$(CC) -c $< -o $@

clean:
	rm -rf $(BUILDDIR)

.SUFFIXES: .c .o