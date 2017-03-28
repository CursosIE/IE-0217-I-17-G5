#include "functions.hpp"
/**
	 * @file functions.cpp
	 * En este archivo se encuentra las funciones para limpiar, mover, crear y limpiar los caracteres en la terminal.
	 *
	 * @author Berni Mora
	 * @author Josselin Porras 
	 * @author Mauricio Corrales
	 */

/** @name clearScreen
 *   Se utilizan codigos ANSI para limpiar pantalla(\x1B[2J) y poner el puntero en la esquina
 *   superior izquierda(\x1B[H)
 */
///@{
void clearScreen(){
	cout << "\x1B[2J\x1B[H";
}
///@}

/** @name moveScreen
 *   Se devuelve el puntero de programa a la posicion inicial en consola, posicion (0,0)
 */
///@{
void moveScreen(){
	cout << "\x1B[H";

}
///@}

/** @name printLine
 *   Llena la cola, si el caracter ascii es menor a 32 (caracteres especiales) se cambia por un espacio
 *   en blanco, y se siguen poniendo 7 espacios en blanco de forma consecutiva para dar el efecto de columnas
 *	@param[in] array Arreglo de char que se llenara aletoriamente
 *	@param[in] tamano Cantidad de entradas del arreglo array
 *	@param[in] vacios Vector de enteros que permite contar cuantos caracteres tipo espacio consecutivos por
 *	columna se han impreso.
 */
///@{
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
///@}

/** @name printScreen
 *  Imprime el contenido actual de la cola
 *	@param[in] temp Arreglo de char ue se va imprimir en pantalla
 *	@param[in] ancho Cantidad de entradas del arreglo temp
 */
///@{
void printScreen(char* temp, int ancho){

	for (int i = 0; i<ancho; i++){
		cout << temp[i];
	}
	cout << endl;
}
///@}

/** @name wait
 *  Se crea un for vacio en forma de retraso, la multilpicacion por 5000000 es para invocar
 *  la funcion wait() con parametros facil de manejar numeros bajos */
///@{
void wait(unsigned int time){
	for(int i=0;i<=time*5000000;i++){}
}
//@}

