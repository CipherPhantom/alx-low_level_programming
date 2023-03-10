#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the number of arguments passed into it.
 * @argc: Argumemt Counter.
 * @argv: Argument Vector.
 *
 * Return: 0 and 1 if Error.
 */
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	printf("Error\n");
	return (1);
}
