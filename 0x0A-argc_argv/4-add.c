#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers.
 * @argc: Argumemt Counter.
 * @argv: Argument Vector.
 *
 * Return: 0 and 1 if Error.
 */
int main(int argc, char **argv)
{
	int i = 1, sum = 0;

	while (i < argc)
	{
		int n = atoi(argv[i]);
		if (n == 0 && *argv[i] != '0')
		{
			printf("Error\n");
			return (1);
		}
		sum += n;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
