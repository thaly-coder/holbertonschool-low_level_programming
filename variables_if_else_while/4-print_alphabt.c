#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
char ss, e, q;

e = 'e';
q = 'q';

for (ss = 'a'; ss <= 'z'; ss++)
{
if (ss != e && ss != q)
{
putchar(ss);
}	
}
return (0);
}
