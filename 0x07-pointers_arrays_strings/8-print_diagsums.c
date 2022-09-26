#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals.
 * @a: array to be used.
 * @size: size of diagonal
 */
void print_diagsums(int *a, int size)
{
	int j;
	int X = 0;
	int T = 0;

	for (j = 0; j < size; j++)
	{
		X += a[(j * size) + j];
		T += a[(size - 1) + ((size - 1) * j)];
	}
	printf("%d, %d\n", X, T);
}
