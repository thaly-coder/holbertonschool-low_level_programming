#include "main.h"

/**
 *_strncat - funcction that concatenates two strings.
 *@dest: input string
 *@src: input string
 *@n: input integer
 *Return: porinter to resulting string
 */

char *_strncat(char *dest, char *src, int n)

{
	int srclen = 0, i = 0;
	char *tmp = dest, *str = src;

	while (*src)
	{
		srclen++;
		src++;
	}
	while (*dest)
		dest++;
	if (n > srclen)
		n = srclen;

	src = str;

	for (; i < n ; i++)
		*dest++ = *src++;
	*dest = '\0';
	return (tmp);
}
