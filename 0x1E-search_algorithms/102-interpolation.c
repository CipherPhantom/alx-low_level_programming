#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in an sorted array of
 * integers using the Interpolation search algorithm.
 *
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located, otherwise -1.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;

	pos = low + ((high - low) * (value - array[low]) /
			(array[high] - array[low]));
	if (pos >= size)
		printf("Value checked array[%ld] is out of range\n", pos);

	while (array[high] != array[low] && value >= array[low] &&
			value <= array[high])
	{
		pos = low + ((high - low) * (value - array[low]) /
				(array[high] - array[low]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else if (array[pos] > value)
			high = pos - 1;
		else
			return (pos);
	}
	return (-1);
}
