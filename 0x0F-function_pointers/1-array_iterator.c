#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter
 * on each element of an array.
 * @array: Array
 * @size: Number of elements in array
 * @action: Pointer to the function to perform on each element of the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
			(*action)(array[i]);
	}
}
