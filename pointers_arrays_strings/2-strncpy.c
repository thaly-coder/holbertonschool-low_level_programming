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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return dest;
}
