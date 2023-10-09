#include "search_algos.h"

void print_array(int *array, size_t size);

/**
 * binary_search - Searches for a value in an sorted array of
 * integers using the Binary search algorithm.
 *
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: The index where value is located, otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start, end, middle;

	if (!array)
		return (-1);

	start = 0;
	end = size - 1;

	while (start <= end)
	{
		print_array(&array[start], end - start + 1);
		middle = (start + end) / 2;
		if (array[middle] < value)
			start = middle + 1;
		else if (array[middle] > value)
			end = middle - 1;
		else
			return (middle);
	}
	return (-1);
}

/**
 * print_array - Prints the elements in an array of integers.
 *
 * @array: A pointer to the first element of the array to print.
 * @size: The number of elements in the array.
 */
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size - 1; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[size - 1]);
}
