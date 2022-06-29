#include "main.h"

/**
 *rev_string - function that reverses a string.
 *@s: input string
 *Return: nothing
 */

void rev_string(char *s)

{
	int leng = 0, i = 0;
	char aux;

	while (s[leng] != '\0')
		leng++;
	{
		while (i < leng--)

		{

			aux = s[i];
			s[i++] = s[leng];
			s[leng] = aux;
		}
	}
}
