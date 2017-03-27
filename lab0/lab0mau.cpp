#include <iostream>
#include <stdlib.h>

// la funcion modulo es lo mas aleatorio
int modulo(int a, int b) { 
	int dividendo = (a/b);
	return a - (dividendo*b);
}

// esta funcion junto a la modulo genera un caracter ascii aleatorio en un rango
char GetChar(int generador, char base, int rango) {
	return (base + modulo(generador, rango));
}

int main() {
	srand (time(NULL));
	char columna[80];
	int a = rand() % 10;
	int b = rand() % 10;
	int c = rand() % 10;
	int d = rand() % 10;	
	while (true) {
		int i = 0;
		while (i < 80) {
			if (columna[i] != ' ') {
				columna[i] = GetChar(a + i*i, 33, 30);
			}
			std::cout << columna[i];
			++i;
		}
		a = rand() % 100;
		b = rand() % 100;
		c = rand() % 100;
		d = rand() % 100;
		columna[modulo(a, 80)] = '-';
		columna[modulo(b, 80)] = ' ';
		columna[modulo(c, 80)] = '-';
		columna[modulo(d, 80)] = ' ';
		i = 0;
		// cambiar wait
		while (i < 650000) {
			GetChar(1, 1, 1);
			 ++i;
		}
	}
    return 0;
}
