#include "main.h"

/**
 *_strlen - function that returns the length of a string.
 *@s: input string
 *Return: length of a string
 */

int _strlen(char *s)

{
	int c = 0;
		while (s[c] != '\0')
			c++;
	return (c);

}
