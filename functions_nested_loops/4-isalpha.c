#include "main.h"

/**
 *_isalpha - function that checks for alphabetic character
 *@c: input character
 *Return: 1 if c is alphabetic value, or 0 otherwise
 */


int _isalpha(int c)

{
	char minus, mayusc;

	int letter = 0;

	for  (minus = 'a'; minus <= 'z'; minus++)
	{
		for (mayusc = 'A'; mayusc <= 'Z'; mayusc++)
		{
		if (c == minus || c  == mayusc)

		letter = 1;
		}
	}

	return (letter);

}
