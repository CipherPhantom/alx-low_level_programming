#include "main.h"

/**
 * _strlen - Finds the length of string
 * @s: pointer
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
	char *str = s;
	int len = 0;

	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * leet- Encodes a string into 1337..
 * @s: Pointer
 *
 * Return: leet encoded string
 */
char *leet(char *s)
{
	char lower[] = {'a', 'e', 'o', 't', 'l'};
	char upper[] = {'A', 'E', 'O', 'T', 'L'};
	char num[] = {'4', '3', '0', '7', '1'};
	int len = _strlen(s);
	int i = 0;

	while (i < len)
	{
		char c = s[i];
		int j = 0;

		while (j < 5)
		{
			if (c == lower[j] || c == upper[j])
				s[i] = num[j];
			j++;
		}
		i++;
	}
	return (s);
}
