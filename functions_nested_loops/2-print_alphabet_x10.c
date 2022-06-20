#include "main.h"

/**
*print_alphabet_x10 - function that prints 10 times the alphabet in lowercase
*Return: nothing
*/

void print_alphabet_x10(void)

{

	char x;
	int z;

	for (z = 0; z < 10; z++)
	{
		
		for (x = 'a'; x <= 'z'; x++)
			_putchar(x);
		_putchar('\n');
	}	
}
