#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
 
int main(void)

{
int a;
long int b;
long long int c;
char d;
float f;

printf("Size of char: %lubyte(s)\n",(unsigned long)sizeof(d));
printf("Size of int: %lubyte(s)\n",(unsigned long)sizeof(a));
printf("Size of long int: %lubyte(s)\n",(unsigned long)sizeof(b));
printf("Size of long long int: %lubyte(s)\n",(unsigned long)sizeof(c));
printf("Size of float: %lubyte(s)\n",(unsigned long)sizeof(f));

return (0);

}
