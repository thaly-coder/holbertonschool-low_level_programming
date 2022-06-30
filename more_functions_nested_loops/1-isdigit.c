#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9).
 *@c: input character
 *Return: 1 if c is uppercase or 0 otherwise
 */

int _isdigit(int c)
{
	char x = '0';
	int i = 0;

	for ( ; x <= '9'; x++)

	{
		if (i == c)
		{
		i = 1;
		break;
		}
	}
	return (i);
}
