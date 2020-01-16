CC = g++
CFLAGS = -std=c++11 -Wall -g
INC = ./include


SRC_DIR := ./src
SRC_SUB_DIR := ./src/inheritance ./src/operator_overloading
OBJ_DIR := ./obj
SRC_FILES := $(wildcard $(SRC_DIR)/*.cpp)

SRC_FILES += $(foreach dir,$(SRC_SUB_DIR),$(wildcard $(dir)/*.cpp))

OBJ_FILES := $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRC_FILES))


all: $(OBJ_FILES)
	g++ -o output $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	mkdir -p $(dir $@)
	g++ $(CFLAGS) -I$(INC) -c -o $@ $<















# SRC directories (with sub Directories)
#SRC_DIR:= ./src ./src/inheritance ./src/operator_overloading
# all CPP files
#SRC_FILES := $(foreach dir,$(SRC_DIR),$(wildcard $(dir)/*.cpp))
#OBJ_DIR := ./obj
#OBJ_FILES := $(patsubst ./src/%.cpp,$(OBJ_DIR)/%.o,$(SRC_FILES))


#objects := $(patsubst %.cpp,%.o,$(wildcard ./src/inheritance/*.cpp))


#all: $(OBJ_FILES)
#	$(CC) -o output $^


#$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
#	mkdir -p $(dir $@)
#	$(CC) $(CFLAGS) -I$(INC) -c -o $@ $<

test1:

	#echo $(OBJ_FILES)

test:
	echo $(objects)

.PHONY: clean memcheck
clean:
	rm -rf $(OBJ_DIR)/* output

memcheck:
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose ./output
