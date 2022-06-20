#include "main.h"

/**
 *Prototype: int _islower(int c)
 *Descripcion:  function that checks for lowercase character
 *Return: 1 if c is lowercase
 *Return: 0 otherwise
 */

 int _islower(int c)

{
	char x
	int low = 0;

	for (x = 'a'; x = 'z'; x++)
	{
		if (x == c)
		low = 1;
	}

	return(low);
}	
