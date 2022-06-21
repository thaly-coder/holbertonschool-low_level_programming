#include "main.h"

/**
 *print_last_digit - function that prints the last digit of a number
 *@r: integre input
 *Return:value of r
 */

int print_last_digit(int r)

{
	int b;

	if (r < 0)

		b = -1 * (r % 10);

	else

		b = r % 10;

	_putchar((b % 10) + '0');

	return (b % 10);
}
