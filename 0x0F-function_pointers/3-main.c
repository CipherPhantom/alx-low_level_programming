#include "3-calc.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Performs simple operations.
 * @argc: Argument Counter
 * @argv: Argument Vector
 *
 * Return: Success:Anwser, Failure: Error
 */
int main(int argc, char **argv)
{
	int num1 = atoi(argv[1]), num2 = atoi(argv[3]);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(argv[2])(num1, num2);
	printf("%d\n", result);
	return (0);
}
