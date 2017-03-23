CPP=g++
SRC=g++
HOME=./
INC=-I $(HOME)/include
LIB=-fopenmp
BIN=nombre_ejecutable

#.....
#labels: all, build, clean, run
#cada label es un target distinto, por default solo corre el primer target, sino puedo elegir así: "make run"

#se imprime el comando y el resultado
all:
	build
build:
	echo 'build'
	#$(CPP) $(SRC) $(LIB) $(INC) -o $(BIN)  
clean:
	echo 'clean'
	#rm -rf ./$(BIN)
run:
	echo 'run'
	#./$(BIN)
