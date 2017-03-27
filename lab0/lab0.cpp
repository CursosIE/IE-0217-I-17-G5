
#include "functions.hpp"

int main(int argc, char* argv[])
{
	int tamano = atoi(argv[1]);
	//char array[tamano];
	queue<char*>cola;
	int alto = 10;
	int ancho = 80;

	srand(time(NULL));

	clearScreen();


	for (;;){
		clearScreen();
		char* temp = (char*)malloc(ancho*sizeof(char));
		printScreen(temp,ancho);
		printLine(temp, ancho);
		cola.push(temp);

		int queue_size = cola.size();


		for(int i = 1; i<(alto); i++){
			if (i == queue_size) {
				break;
			}

			char* element = cola.front();
			printLine(element, ancho);
			cola.pop();
			cola.push(element);
			}

		if(queue_size > alto){
			char* x = cola.front(); 
			cola.pop();
			free(x);
		}

		sleep(1);
	}


	//printScreen(array,tamano);
	//wait(100);
	//printScreen(array,tamano);

	return 0;
}




