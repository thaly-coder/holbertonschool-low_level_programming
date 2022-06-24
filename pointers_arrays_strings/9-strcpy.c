#include "main.h"

/**
 *_strcpy -c function that copies the string pointed to by src,
 *including the terminating null byte (\0), to the buffer pointed to by dest.
 *@dest: a pointer
 *@src: a pointer
 *Return: pointer to dest
 */

char *_strcpy(char *dest, char *src) 
{
	char *c = dest;
	while (*src)
		*dest++ = *src++;
	return (c);
}
