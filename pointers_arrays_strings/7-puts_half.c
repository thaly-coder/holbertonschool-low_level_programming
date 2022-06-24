#include "main.h"

/**
 *puts_half - function that prints half of a string, followed by a new line
 *@str: a string
 *Return: 0
 */

void puts_half(char *str)
{
	int x = 0, y, z;

	while (str[x]  != '\0')
		x++;

	if (x % 2 == 0)
		z = x / 2;

	else
		z = (x + 1) / 2;

	for (y = z; y < x; y++)
		_putchar(str[y]);

	_putchar('\n');

}
