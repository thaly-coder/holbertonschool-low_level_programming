
#include "main.h"

/**
 *print_rev - function that prints a string, in reverse, followed by a new line.
 *@s: input string
 *Return: nothing
 */
void print_rev(char *s)

{
	int c = 0;

	while (s[c] != '\0')
		c++;

	while (c)
		_putchar(s[--c]);

	_putchar('\n');

}	
