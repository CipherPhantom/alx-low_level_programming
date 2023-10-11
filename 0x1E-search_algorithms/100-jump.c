#include "search_algos.h"

/**
 * jump_search - Searches for a value in an sorted array of
 * integers using the Jump search algorithm.
 *
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located, otherwise -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start, end, i;

	if (!array)
		return (-1);

	start = end = 0;
	while (array[end] < value && end < size)
	{
		printf("Value checked array[%ld] = %d\n", end, array[end]);
		start = end;
		end += sqrt(size);
	}
	if (start != end)
		printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	for (i = start; i <= end && i < size; i++)
	{
		printf("Value checked array[%ld] = %d\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
