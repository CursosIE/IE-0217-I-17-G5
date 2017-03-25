#include "functions.hpp"

void clearScreen(){
	//cout << string(100, '\n');
	cout << "\x1B[2J\x1B[H";
}

void moveScreen(){

}
void printScreen(){

}

void wait(unsigned int time){
	for(int i=0;i<=time*5000000;i++){}
}
