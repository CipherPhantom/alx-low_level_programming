#include "main.h"
#include <stdlib.h>

/**
  * reverse_array - Reverses the content of an array of integers.
  * @a: Pointer to array
  * @n: The number of elements of the array
  *
  * Return: dest = dest + src[n]
  */
void reverse_array(int *a, int n)
{
	int *b = (int *)malloc(n * sizeof(int));
	int i = 0, j = 0;

	while (i < n)
	{
		int *loc = (b + i);

		*loc = a[i];
		i++;
	}
	while (j < n)
	{
		int *loc = (a + j);

		*loc = b[i - 1];
		i--;
		j++;
	}
}
