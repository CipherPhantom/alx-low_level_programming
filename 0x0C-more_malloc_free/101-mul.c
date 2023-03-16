#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Multiplies two positive numbers.
 * @argc: Argument Counter.
 * @argv: Argumnet Vector.
 *
 * Return: Value.
 */
int main(int argc, char **argv)
{
	int i, j, tmp, l1, l2;
	char *num1, *num2;
	int *a, *b, *ans;

	if (argc == 3)
	{
		num1 = argv[1];
		num2 = argv[2];
		if (!(all_digits(num1) && all_digits(num2)))
		{
			printf("Error\n");
			exit(98);
		}
		l1 = strlen(num1);
		l2 = strlen(num2);
		a = malloc(sizeof(int) * l1);
		b = malloc(sizeof(int) * l2);
		ans = malloc(sizeof(int) * max(l1, l2) * 2);
		for (i = l1 - 1, j = 0; i >= 0; i--, j++)
			a[j] = num1[i] - '0';
		for (i = l2 - 1, j = 0; i >= 0; i--, j++)
			b[j] = num2[i] - '0';
		for (i = 0; i < l2; i++)
		{
			for (j = 0; j < l1; j++)
				ans[i + j] += b[i] * a[j];
		}
		for (i = 0; i < l1 + l2; i++)
		{
			tmp = ans[i] / 10;
			ans[i] = ans[i] % 10;
			ans[i + 1] = ans[i + 1] + tmp;
		}
		print_array(ans, l1 + l2);
		exit(0);
	}
	printf("Error\n");
	exit(98);
	return (0);
}
/**
 * all_digits - Checks if all the characters in a string are digits.
 * @s: string pointer.
 *
 * Return: 1 if all and 0 otherwise
 */
int all_digits(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}
/**
 * max - Maximum of two digits.
 * @x: first digit.
 * @y: second digit.
 *
 * Return: Larger digit.
 */
int max(int x, int y)
{
	if (x > y)
		return (x);
	else
		return (y);
}

/**
 * print_array - Print array of numbers.
 * @a: array.
 * @l: length of array.
 */
void print_array(int *a, int l)
{
	int i;

	for (i = l; i >= 0; i--)
	{
		if (a[i] > 0)
			break;
	}
	for (; i >= 0; i--)
		printf("%d", a[i]);
	printf("\n");
}
