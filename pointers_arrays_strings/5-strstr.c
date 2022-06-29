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

{{
	for ( ; *haystack; ++haystack)
	{
		char str1 = needle;
		for (str2 = haystack; *str1==*str2 && *str1; ++str1; ++str2);

		if (*srt1 == '\0')
			return (haystack);
	}	
	return (NULL);
}}
