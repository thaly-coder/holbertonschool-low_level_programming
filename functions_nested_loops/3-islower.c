#include "main.h"

/**
 * _islower -  function that checks for lowercase character
 *@c: input character
 *Return: 1 if c is lowercase or 0 if is uppercase
 */

int _islower(int c)

{
	char x;
	int minusc = 0;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == c)
		minusc = 1;
	}

	return (minusc);
}
