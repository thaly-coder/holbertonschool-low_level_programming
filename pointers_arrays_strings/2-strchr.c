#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: string to be scanned
 * @c: character to be searched in s
 * Return: pointer to c position
 */

char *_strchr(char *s, char c)

{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
