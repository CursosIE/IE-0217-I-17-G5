
#include "functions.hpp"

int main(int argc, char* argv[])
{
	cout << "\x1b[32m\x1b[1m";
	int ancho = atoi(argv[1]);
	int alto = atoi(argv[2]);

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

		wait(25);
	}


	return 0;
}




