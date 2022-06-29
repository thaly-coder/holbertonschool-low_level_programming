#include "main.h"
/**
 * print_diagsums - function that prints the sum of the
 * two diagonals of a square matrix of integers.
 * @a: input pointer
 * @size:input string
 */

void print_diagsums(int *a, int size)

{
	int x = 0, y = 0;
	int i = 0;

	for (i = 0; i < size; i++)
	{
		x += a[i, i];
		y += a[i, size - i - 1];
	}
	x + y;
}
