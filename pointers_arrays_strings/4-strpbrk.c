#include "main.h"
#include <stdio.h>

/**
 *_strpbrk - function that searches a string for any of a set of bytes.
 *@s: input string
 *@accept: input charater  to locate the string s
 *Return:  pointer to the byte in s that matches one of the bytes in accept,
 *or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	char *start = accept;
	while (*s)

	{
		while (*accept)
		{

		if ( *s == *accept)
			return (s);
		accept++;
		}
	accept = start;
	s++;

	}

	return (NULL);
}
