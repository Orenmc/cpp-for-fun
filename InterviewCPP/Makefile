
# $(wildcard *.cpp /xxx/xxx/*.cpp): get all .cpp files from the current directory and dir "/xxx/xxx/"
#SRCS := $(wildcard src/*.cpp)
# $(patsubst %.cpp,%.o,$(SRCS)): substitute all ".cpp" file name strings to ".o" file name strings
#OBJS := $(patsubst %.cpp,%.o,$(SRCS))


CC = g++
CFLAGS = -std=c++11 -Wall -g

#SRC_DIR := ./src ./src/inheritance
SRC_DIR := ./src/**
OBJ_DIR := ./obj
#SRC_FILES := $(wildcard $(SRC_DIR)/*.cpp $(SRC_DIR)/inheritance/*.cpp)
SRC_FILES := $(wildcard $(SRC_DIR)/*.cpp $(SRC_DIR)/inheritance/*.cpp)
OBJ_FILES := $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRC_FILES))


test1:
	echo $(SRC_FILES)
INC = include

all: $(OBJ_FILES)
	$(CC) -o output $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CC) $(CFLAGS) -I $(INC) -c -o $@ $<



#all: $(OBJS)
#	$(CC) -o output $^

#%.o: %.cpp
#	$(CC) $(CFLAGS) -c -I $(INC) $<	

.PHONY: clean memcheck
clean:
	rm $(OBJ_DIR)/*.o output

memcheck:
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose ./output
