#include "main.h"

/**
 *print_sign - function that prints the sign of a number
 *@n: input number
 *Return: 1 if n is positive, 0 if n is 0 or -1 if n is negative
 */

int print_sign(int n)

{
	int num;


	if (n > 0)

	{
	num = 1;
	_putchar('+');
	}

	else if (n == 0)
	{
	num = 0;
	_putchar('0');
	}
	else
	{
	num = -1;
	_putchar('-');
	}
	return (num);


}
