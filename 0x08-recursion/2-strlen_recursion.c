#include "main.h"

/**
 * _strlen_recursion - Computes the length of a string.
 * @s: Pointer to a string.
 *
 * Return: The length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
