#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string
 * Return: Length of string
 */
int _strlen(char *s)
{
	char *n = s, len = 0;

	while (*n)
	{
		len++;
		n++;
	}

	return (len);
}

/**
 * rev_string - Reverses a string.
 * @s: Pointer of the string.
 */
void rev_string(char *s)
{
	int len = _strlen(s);
	int i = 0, j = len;
	char *n;

	while (j)
	{
		char c = *(s + j - 1);
		char *l = (n + i);

		*l = c;
		i++;
		j--;
	}

	int k;

	while (k < len)
	{
		char c = *(n + k);
		char *l = (s + k);

		*l = c;
		k++;
	}
}
