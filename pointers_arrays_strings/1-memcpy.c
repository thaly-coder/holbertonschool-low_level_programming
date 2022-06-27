#include "main.h"
/**
 *_memcpy -  function that copies memory area
 *@dest: pointer to the destination array where the content is to be copied
 *@src: pointer to the source of data to be copied
 *@n: number of bytes
 *Return: pointer to copy location
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *star = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (star);
}
