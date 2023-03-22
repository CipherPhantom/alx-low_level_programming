#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 * @array: Array
 * @size: Number of elements in the array
 * @cmp: Pointer to the function that checks for the integer.
 * Return: Index of the integer and -1 if integer not found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
