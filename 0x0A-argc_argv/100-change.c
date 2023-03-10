#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: Argument Counter.
 * @argv: Argument Vector.
 *
 * Return: 0 and 1 if Error.
 */
int main(int argc, char **argv)
{
	int n, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	while (n > 0)
	{
		if (n >= 25)
		{
			n -= 25;
			change += 1;
		}
		else if (n >= 10)
		{
			n -= 10;
			change += 1;
		}
		else if (n >= 5)
		{
			n -= 5;
			change += 1;
		}
		else if (n >= 2)
		{
			n -= 2;
			change += 1;
		}
		else
		{
			n -= 1;
			change += 1;
		}
	}
	printf("%d\n", change);
	return (0);
}
