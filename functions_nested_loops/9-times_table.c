#include "main.h"

/**
 *void times_table - function that prints the 9 times table, starting with 0
 *
 *Return: 0
 */

void times_table(void)

{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
	for (j = 0; j <= 9; j++)	
	{
		z = x * y;

		if ((z / 10)== 0)
		{
		if (y != 0)
			
		_putchar (' ');
		_putchar (z + '0'); 

		if (y == 9)
			continue;
		_putchar (',');
		_putchar (' ');
		}
	else
	{
		_putchar ((z / 10) + '0');
		_putchar ((z % 10) + '0');
		if (y == 9)
			continue;
		_putchar (';');
		_putchar (' ')
	}		
}
