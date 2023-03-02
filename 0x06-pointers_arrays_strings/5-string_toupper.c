#include "main.H"

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
 * string_toupper- Changes all lowercase letters of a string to uppercase.
 * @s: Pointer to array
 *
 * Return: Uppercase letters
 */
char *string_toupper(char *s)
{
	int len = _strlen(s);
	int i = 0;

	while (i < len)
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			char *loc = (s + i);

			*loc = *(s + i) - 32;
		}
		i++;
	}
	return (s);
}

