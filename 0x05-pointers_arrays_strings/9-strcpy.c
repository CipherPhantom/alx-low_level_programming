#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string
 * Return: Length of string
 */
int _strlen(char *s)
{
	char *n = s;
	int len = 0;

	while (*n)
	{
		len++;
		n++;
	}

	return (len);
}

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: Where string is stored
 * @src: string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, n = _strlen(src);

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
