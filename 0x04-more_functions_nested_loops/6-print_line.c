#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: Length of line.
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (n > 0)
		{
			_putchar('_');
			_putchar('\n');
			n--;
		}
	}
}
