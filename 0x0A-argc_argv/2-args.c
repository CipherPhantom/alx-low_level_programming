#include "main.h"

/**
 * main - Prints all arguments it receives.
 * @argc: Argumemt Counter.
 * @argv: Argument Vector.
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i = 0, j;

	while (i < argc)
	{
		char *s = argv[i];

		j = 0;
		while (*(s + j) != '\0')
		{
			_putchar(*(s + j));
			j++;
		}
		_putchar('\n');
		i++;
	}
	return (0);
}
