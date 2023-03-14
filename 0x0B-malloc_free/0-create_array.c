#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - Creates an array of chars,
 *		and initializes it with a specific char.
 * @size: Array size.
 * @c: Initialization character.
 *
 * Return: NULL for failure and the pointer
 *		to the first element of the array otherwise.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *str;

	if (size == 0)
		return (NULL);

	str = (char *)malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';
	return (str);
}
