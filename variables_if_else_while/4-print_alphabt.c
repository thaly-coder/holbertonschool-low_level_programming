#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
char ss, e, q;

q = 'q';
e = 'e';

for (ss = 'a'; ss >= 'z'; ss++)
{
if (ss !='q' && ss !='e')
{
putchar(ss);
}	
}
return (0);
}
