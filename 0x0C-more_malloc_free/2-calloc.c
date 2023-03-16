#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: Number of bytes of each element.
 * @size: Number of elements:
 *
 * Return: A pointer to the allocated space, or NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	ptr = memset(ptr, 0, size *nmemb);
	return (ptr);
}
