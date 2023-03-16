#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Number of bytes.
 *
 * Return: A pointer.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (malloc(b) == NULL)
		exit(98);
	return (ptr);
}
