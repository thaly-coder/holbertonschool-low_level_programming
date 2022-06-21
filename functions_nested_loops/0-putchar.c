#include "main.h"
/**
 * main- Entry point
 * description: program that prints _putchar, followed by a new line.
 * Return: Nothing
 */

int main(void)

{
	char x[9] = "_putchar\n";
	int d;

	for (d = 0; d < 10; d++)

		_putchar(x[d]);


	return (0);
}
