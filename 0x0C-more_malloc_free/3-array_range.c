#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: Minimum number.
 * @max: Maximum number.
 *
 * Return: A pointer to the allocated space, or NULL.
 */
int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		ptr[i - min] = i;
	return (ptr);
}
