#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: a pointer to the first occurrence of the character c in the string s
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *str = s;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			break;
		str++;
		i++;
	}
	if (*str != '\0')
		return (str);
	return (NULL);
}
