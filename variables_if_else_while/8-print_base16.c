#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)

{

	char ss;

	for (ss = '0'; ss <= '9'; ss++)
	{
	putchar(ss);
	}
	for (ss = 'a'; ss <= 'f'; ss++)
	{
	putchar(ss);
	}
	{
	putchar('\n');
	}
	return (0);
}	
