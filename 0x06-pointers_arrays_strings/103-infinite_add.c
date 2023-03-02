#include "main.h"
#include <stdlib.h>

/**
 * reverse_array - reverses an array.
 * @a: array
 * @n: number of items
 */
void reverse_array(char *a, int n)
{
	char *b = (char *)malloc(n * sizeof(char));
	int i = 0, j = 0;

	while (i < n)
	{
		char *loc = (b + i);

		*loc = a[i];
		i++;
	}
	while (j < n)
	{
		char *loc = (a + j);

		*loc = b[i - 1];
		i--;
		j++;
	}
}

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
 * infinite_add - Adds two numbers.
 * @n1: Pointer to integer string.
 * @n2: Pointer to integer string.
 * @r: The buffer where the result is stored.
 * @size_r: Buffer size.
 *
 * Return: 0 or r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1_len = _strlen(n1);
	int n2_len = _strlen(n2);
	int i = 0, num = 0;

	if (n1_len >= size_r || n2_len >= size_r)
		return (0);
	while (i < size_r)
	{
		int x, y;

		if (i < n1_len)
			x = n1[n1_len - i - 1] - 48;
		else
			x = 0;
		if (i < n2_len)
			y = n2[n2_len - i - 1] - 48;
		else
			y = 0;
		num = x + y + (num / 10);
		r[i] = num % 10 + 48;
		i++;
	}
	if (num > 9)
		return (0);
	reverse_array(r, size_r);
	while (*r == 48)
		r++;
	return (r);
