#include "functions.hpp"


//códigos ANSI para limpiar pantalla(\x1B[2J) y poner el puntero al inicio(\x1B[H)
void clearScreen(){
	cout << "\x1B[2J\x1B[H";
}

//se devuelve el puntero de programa a la posicion inicial en consola, posicion (0,0)
void moveScreen(){
	cout << "\x1B[H";

}

//llena la cola, si el caracter ascii es menor a 32 (caracteres especiales) se cambia
//por un espacio en blanco, y se siguen poniendo 7 espacios en blanco de forma consecutiva
//para dar el efecto de columnas
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

//imprime el contenido actual de la cola
void printScreen(char* temp, int ancho){

	for (int i = 0; i<ancho; i++){
		cout << temp[i];
	}
	cout << endl;
}

//se crea un for vacio en forma de retraso, la multilpicacion por 5000000 es
//para invocar la funcion wait() con parametros facil de manejar
//numeros bajos
void wait(unsigned int time){
	for(int i=0;i<=time*5000000;i++){}
}
