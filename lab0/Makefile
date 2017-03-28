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
	@rm -rf ./$(BIN) 2>/dev/null || true
	@rm config 2>/dev/null || true
	@rm -rf html/ 2>/dev/null || true
	@rm -rf latex/ 2>/dev/null || true
run:
	./$(BIN)


	