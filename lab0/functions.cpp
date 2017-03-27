#include "functions.hpp"



void clearScreen(){
	cout << "\x1B[2J\x1B[H";
}

void moveScreen(){
	cout << "\x1B[H";

}

void printLine(char* array,  int tamano, int* vacios){
	int numero;
	for (int j = 0; j<tamano; j++){
		numero = rand() % 127;
		if(numero<32){
			array[j] = ' ';
			if(vacios[j]>=7){
			vacios[j]=0;
			}
		}else{
			if(vacios[j]<7){
				array[j]=' ';
				vacios[j]++;
			}else{
				array[j] = (char)numero;
			}
		}
	}
}

void printScreen(char* temp, int ancho){

	for (int i = 0; i<ancho; i++){
		cout << temp[i];
	}
	cout << endl;
}

void wait(unsigned int time){

	for(int i=0;i<=time*5000000;i++){}
}
