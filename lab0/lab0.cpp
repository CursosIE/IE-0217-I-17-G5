
#include "functions.hpp"

int main()
{
	srand(time(NULL));
	char array[10];	
	clearScreen();
	cout << "línea 1 \n";
	wait(100);
	cout << "línea 2 \n";

	printScreen(array,0);

  return 0;
}




