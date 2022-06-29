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

	int srcleng = 0, i = 0;
	char *aux_1 = dest, *aux_2 = src;

	while (*src)
	{
        
		srcleng++;
		src++;
	}
	srcleng++;

	if (n > srcleng)
		
		n = srcleng;
	src = aux_2;
	
	for (; i < n ; i++)
	
		*dest++ = *src++;
	
	return (aux_1);
}
