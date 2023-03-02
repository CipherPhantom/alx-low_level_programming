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
 * rot13 - Encodes a string using rot13.
 * @s: Pointer
 *
 * Return: rot13 enconded string.
 */
char *rot13(char *s)
{
	int len = _strlen(s);
	int i = 0;

	while (i < len)
	{
		while ((s[i] >= 'a'&& s[i] <= 'z') ||
				(s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] >= 'a' && s[i] <= 'm') ||
					(s[i] >= 'A' && s[i] <= 'M'))
				s[i] += 13;
			else
				s[i] -= 13;
			i++;
		}
	}
	return (s);
}
