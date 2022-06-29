#include "main.h"

/**
 *_strncpy - funcction that copy strings whit n numbers of charters
 *@dest:  This is the pointer to the destination array
 *where the content is to be copied
 *@src: This is the string to be copied
 *@n: The number of characters to be copied from source
 *Return: pointer to the copied string.
 */

char *_strncpy(char *dest, char *src, int n)

{
	int x = 0;

	while (src[x] != '\0')
	{

		dest[x] = src[x];
		x++;

	}

	for (; x < n ; x++)

	return (*dest);
}
