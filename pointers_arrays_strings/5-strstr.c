#include "main.h"
#include <stdio.h>

/**
 *_strstr - function that locates a substring.
 *@haystack: This is the main C string to be scanned
 *@needle: This is the small string to be searched with-in haystack string.
 *Return: pointer to the beginning of the located substring,
 *or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)

{
	char *strh = haystack, *strn = needle;

	while (*haystack)

	{
		strh = haystack;
		needle = strn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
		haystack = strh + 1;
	}
	return (NULL);
}
