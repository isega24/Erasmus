CC=g++
CFLAGS=-c -Wall
LDFLAGS=
BIN=./bin
SRC=./src
OBJ=./obj
vpath %.cpp src
vpath %.h include

PROGRAM=$(BIN)/planets
OBJS=$(OBJ)/planets.o
SRCS=$(SRC)/planets.cpp

all:$(PROGRAM)
	echo Execution of the program:
	$(PROGRAM) ./txt/example1.txt

$(PROGRAM): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $^

$(OBJ)/%.o : $(SRC)/%.cpp
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm $(BIN)/* $(OBJ)/*
