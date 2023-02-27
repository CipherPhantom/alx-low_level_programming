#include "main.h"

/**
 * print_array - Prints n elements of an array of integers.
 * @a: array
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
		else
			printf("\n");
		i++;
	}
}
