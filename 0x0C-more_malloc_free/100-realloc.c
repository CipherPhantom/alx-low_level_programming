#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Allocated memory.
 * @old_size: Size(in bytes) of allocated memory.
 * @new_size: Size(in bytes) new memory.
 *
 * Return: A pointer to the allocated space, or NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *ptr_n;

	if (ptr == NULL)
	{
		ptr_n = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
	}

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size < old_size)
	{
		for (i = new_size; i < old_size; i++)
			*((char *)(ptr) + i) = NULL;
	}

	if (new_size > old_size && ptr != NULL)
	{
		ptr_n = malloc(new_size);
		if (ptr_n == NULL)
			return (NULL);
		for (i = 0; i < old_size; i++)
			ptr_n[i] = *((char *)(ptr) + i);
		free(ptr);
	}
	return (ptr_n);
}
