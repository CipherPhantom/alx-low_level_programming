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
 * rev_string - Reverses a string.
 * @s: Pointer of the string.
 */
void rev_string(char *s)
{
	int len = _strlen(s);
	int i = 0, j = len, k = 0;
	char n[len], *l, c;

	while (j)
	{
		c = *(s + j - 1);
		n[i] = c;
		i++;
		j--;
	}

	while (k < len)
	{
		char *l = (s + k);

		*l = n[k];
		k++;
	}
}
