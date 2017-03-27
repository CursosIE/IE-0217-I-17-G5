
#include "functions.hpp"

int main(int argc, char* argv[])
{
	cout << "\x1b[32m\x1b[1m";
	int ancho = atoi(argv[1]);
	int alto = atoi(argv[2]);
	//char array[ancho];
	queue<char*>cola;


	srand(time(NULL));

	clearScreen();


	for (;;){
		moveScreen();
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




