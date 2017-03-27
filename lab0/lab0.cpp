
#include "functions.hpp"

int main(int argc, char* argv[])
{
	cout << "\x1b[32m\x1b[1m";
	int ancho = atoi(argv[1]);
	int alto = atoi(argv[2]);
	queue<char*>cola;
	srand(time(NULL));
	int vacios[ancho];
	for(int i=0;i<ancho;i++){
		vacios [i]=10;
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




