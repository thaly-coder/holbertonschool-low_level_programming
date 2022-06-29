#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the
 * two diagonal a square matrix of integers.
 * @a: square matrix of integer
 * @size:input integer
 * Return: noting
 */

void print_diagsums(int *a, int size)

{
	int i = 0, aux = size * size, x = 0, y = 0;

	for (; i < aux; i += size + 1)
		x += a[i];
	for (i = size - 1; i < aux - 1; i += size - 1)
		y += a[i];

	printf("%d, %d\n", x, y);
}
