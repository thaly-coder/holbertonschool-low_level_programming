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
	dest[50] = 0;
	src[50] = 0;
	_strcpy (dest,src);
}	
