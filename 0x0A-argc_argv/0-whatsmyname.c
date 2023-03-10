#include "main.h"

/**
 * main - Prints its name, followed by a new line.
 * @argc: Argumemt Counter.
 * @argv: Argument Vector.
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i = 0;
	char *s = argv[argc - 1];

	while (*(s + i) != '\0')
	{
		_putchar(*(s + i));
		i++;
	}
	_putchar('\n');
	return (0);
}
