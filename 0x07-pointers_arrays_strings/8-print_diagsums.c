#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the
 * two diagonals of a square matrix of integers
 * @a: matrix
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j;
	unsigned int sum1 = 0, sum2 = 0;

	while (i < size)
	{
		sum1 += *(a + (i * size) + i);
		i++;
	}
	i = 0;
	j = size - 1;
	while (i < size)
	{
		sum2 += *(a + (i * size) + j);
		i++;
		j--;
	}
	printf("%d, %d\n", sum1, sum2);
}
