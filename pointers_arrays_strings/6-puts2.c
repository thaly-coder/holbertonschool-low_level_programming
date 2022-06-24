#include "main.h"

/**
 *puts2 - function that prints every other character of a string,
 *starting with the first character, followed by a new line.
 *@str: string
 *Return: nothing
 */

void puts2(char *str)

{
	int x = 0,  y = 0;

	while (str[x] != '\0')
		x++;
	x -= 1;

	for (; y <= x; x += 2)
		_putchar(str[y]);

	_purtchar('\n');

}	
