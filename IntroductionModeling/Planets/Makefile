CC=g++
CFLAGS=-c -Wall
LDFLAGS=
BIN=./bin
SRC=./src
OBJ=./obj
RES=./results
vpath %.cpp src
vpath %.h include

PROGRAM=$(BIN)/planets
OBJS=$(OBJ)/planets.o
SRCS=$(SRC)/planets.cpp
PAINT=paint.py

all:$(PROGRAM) $(PAINT)
	echo Execution of the program:
	echo "" > $(RES)/results1.txt
	$(PROGRAM) ./txt/example1.txt > $(RES)/results1.txt

git:
	git add -A
	git commit -m "Modifications"
	git push

paint:
	python $(PAINT) $(RES)/results1.txt

$(PROGRAM): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $^

$(OBJ)/%.o : $(SRC)/%.cpp
	$(CC) $(CFLAGS) -o $@ $<


clean:
	rm $(BIN)/* $(OBJ)/*
