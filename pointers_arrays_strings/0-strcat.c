#include "main.h"

/**
 *_strcat - function that concatenates two string
 *@src: a string
 *@dest: a string 
 *Return: pointer to the *dest + *src union
 */

char *_strcat(char *dest, char *src)

{
	char *tmp = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;

	*dest = '\0';

	return (tmp);
}
