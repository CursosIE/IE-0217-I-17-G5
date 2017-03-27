
#include "functions.hpp"

int main(int argc, char* argv[])
{
	//esto hace que la semilla del rand() sea con el reloj, por lo que aumenta alateoreidad
	srand(time(NULL));

	//con este codigo ANSI se define color verde y negrita
	cout << "\x1b[32m\x1b[1m";

	//se reciben el alto y ancho de la terminal de los parametros en consola
	int ancho = atoi(argv[1]);
	int alto = atoi(argv[2]);

	//se inicializa la cola
	queue<char*>cola;

	//se inicializa un vector que va servir para decidir columanas en blanco
	int vacios[ancho];

	//se inicializa el vector aleatoreamente para ver que columnas empiezan en blanco
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




