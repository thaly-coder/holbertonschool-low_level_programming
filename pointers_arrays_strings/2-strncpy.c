#include "main.h"

/**
 *_strncpy - funcction that copy strings
 *@dest: input string
 *@src: input string
 *@n: input integer
 *Return: porinter to resulting string
 */

char *_strncpy(char *dest, char *src, int n)

{
	int srclen = 0, i = 0;
	char *tmp = dest, *str = src;

	while (*src)
	{
		srclen++;
		src++;
	}
	srclen++;

	if (n > srclen)
		n = srclen;
	src = str;

	for (; i < n ; i++)
		*dest++ = *src++;
	return (tmp);
}
