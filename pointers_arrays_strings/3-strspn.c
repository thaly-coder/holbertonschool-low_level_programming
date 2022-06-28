#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: This function returns the number of characters
 * in the initial segment
 */

unsigned int _strspn(char *s, char *accept)

{
	int count = 0, flag;
	char *start = accept;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				flag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = start;
		if (flag == 0)
			break;
	}
	return (count);
}
