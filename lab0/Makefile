CPP=g++
SRC=lab0.cpp
#HOME=./
#INC=-I $(HOME)/include
INC=
LIB=functions.cpp
BIN=lab0

all: build

build:
	@$(CPP) $(SRC) $(LIB) $(INC) -o $(BIN)  
	@doxygen -g config
	@doxygen config
clean:
	@rm -rf ./$(BIN)
	@rm config
	@rm -rf html/
	@rm -rf latex/
run:
	./$(BIN)


	