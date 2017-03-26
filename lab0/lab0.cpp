
#include "functions.hpp"

int main(int argc, char* argv[])
{
	srand(time(NULL));

	clearScreen();

	//el primer argumento va ser el número de columnas de la terminal
	int tamano = atoi(argv[1]);
	char array[tamano];

	printScreen(array,tamano);
	wait(100);
	printScreen(array,tamano);

	return 0;
}




