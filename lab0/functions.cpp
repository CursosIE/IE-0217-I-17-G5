#include "functions.hpp"



void clearScreen(){
	//cout << string(100, '\n');
	cout << "\x1B[2J\x1B[H";
}


void printScreen(char* array,  int tamano){

	for (int j = 0; j<tamano; j++){
	array[j] = (char)(rand() % 95 + 32);
	//cout << array[j];
	}
	//cout << array[0];	
	//cout << endl;
}

void printLine(char* temp, int ancho){

	for (int i = 0; i<ancho; i++){
		cout << temp[i];
	}
	cout << endl;
}

void wait(unsigned int time){

	for(int i=0;i<=time*5000000;i++){}
}
