#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 *@c: input character
 *Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	char letter = 'A';
	int i = 0;
       	
	for ( ; letter <= 'Z'; letter++)
	{
		if (c == letter)
		{
			i = 1;
			break;
		}
	}
	return (i);
}	
