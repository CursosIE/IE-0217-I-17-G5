/**
	 * @file lab0.cpp
	 * En este archivo se encuentra el main del programa que genera el efecto Matrix en una terminal 
	 *
	 * @author Berni Mora
	 * @author Josselin Porras 
	 * @author Mauricio Corrales
	 */
#include "functions.hpp"

/** @name main
*Se reciben el alto y ancho de la terminal como parametros en consola
*@param[in] ancho Indica el ancho de la terminal
*@param[in] alto Indica el alto de la terminal
*/
///@{
int main(int argc, char* argv[])
{
	//Esto hace que la semilla del rand() sea con el reloj, por lo que aumenta alateoreidad
	srand(time(NULL));

	//Con este codigo ANSI se define color verde y negrita
	cout << "\x1b[32m\x1b[1m";


	int ancho = atoi(argv[1]);
	int alto = atoi(argv[2]);

	//Se inicializa la cola
	queue<char*>cola;

	//@param[in] vacios Vector decidir columanas en blanco
	int vacios[ancho];

	//Se inicializa el vector aleatoreamente para ver que columnas empiezan en blanco
	for(int i=0;i<ancho;i++){
		vacios [i]= rand() % 1 + 6;
	}


	clearScreen();

	for (;;){
		moveScreen();
		char* temp = (char*)malloc(ancho*sizeof(char));
		printLine(temp, ancho, vacios);
		printScreen(temp, ancho);
		cola.push(temp);

		int queue_size = cola.size();


		for(int i = 1; i<(alto); i++){
			if (i == queue_size) {
				break;
			}

			char* element = cola.front();
			printScreen(element, ancho);
			cola.pop();
			cola.push(element);
		}

		if(queue_size > alto){
			char* x = cola.front(); 
			cola.pop();
			free(x);
		}

		wait(10);
	}

	return 0;
}




