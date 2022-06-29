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
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			x += a[i,j];

			if ((i + j) == (size - 1))
			y += a[i,j];
		}	
	}
	
}
