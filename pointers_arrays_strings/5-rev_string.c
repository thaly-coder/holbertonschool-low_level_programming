#include "main.h"

/**
 *rev_string - function that reverses a string.
 *@s: input string
 *Return: nothing
 */

void rev_string(char *s)

{
	int x = 0, y = 0;
	char z;

	while (s[x] != '\0')
	x++;

	while (y < x--)

	{

	z = s[x];
	s[y++] = s[x];
	s[x] = z;
	}
}
