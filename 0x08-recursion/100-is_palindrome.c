#include "main.h"
#include <string.h>

/**
 * is_palindrome - Checks if a strinf is a palindrome.
 * A string that is same when reversed.
 * @s: Pointer to the stirng.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);
	char str[len];

	if (*s == '\0' || *(s + 1) == '\0')
		return (1);
	if (*s == *(s + len - 1))
	{
		strncpy(str, s + 1, len - 2);
		str[len - 2] = '\0';
		return (is_palindrome(str));
	}
	return (0);
}
