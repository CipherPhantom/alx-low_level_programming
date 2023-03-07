#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring.
 * @haystack: string to be scanned
 * @needle: string containing the characters to match.
 *
 * Return: a pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle != '\0')
		{
			if (haystack[i + j] != needle[j])
				break;
			j++;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
		i++;
	}
	return (NULL);
}

