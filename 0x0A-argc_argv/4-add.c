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
	int i = 1, sum = 0, j;

	while (i < argc)
	{
		j = 0;
		while (*(argv[i] + j))
		{
			if (!(*(argv[i] + j) >= '0' && *(argv[i] + j) <= '9'))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
