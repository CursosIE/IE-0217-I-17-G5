#include "functions.hpp"



void clearScreen(){
	//cout << string(100, '\n');
	cout << "\x1B[2J\x1B[H";
}

void moveScreen(){

}
void printScreen(char array[],  int tamano){

	for (int j = 0; j<tamano; j++){
	array[j] = (char)(rand() % 95 + 32);
	cout << array[j];
	}	
	cout << endl;
}

void wait(unsigned int time){
	for(int i=0;i<=time*5000000;i++){}
}
