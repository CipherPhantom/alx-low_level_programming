#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: Pointer to "copy to"
 * @src: Pointer to "copy from"
 * @n: Number of bytes
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
