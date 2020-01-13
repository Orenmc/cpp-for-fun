CC = g++
CFLAGS = -Wall -g

# $(wildcard *.cpp /xxx/xxx/*.cpp): get all .cpp files from the current directory and dir "/xxx/xxx/"
SRCS := $(wildcard *.cpp)
# $(patsubst %.cpp,%.o,$(SRCS)): substitute all ".cpp" file name strings to ".o" file name strings
OBJS := $(patsubst %.cpp,%.o,$(SRCS))

INC = ../include

all: $(OBJS)
	$(CC) -o output $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c -I $(INC) $<	

.PHONY: clean memcheck
clean:
	rm *.o output

memcheck:
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose ./output
