#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: Number of times
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i = 0;

		while (n > 0)
		{
			while (i > 0)
			{
				_putchar(' ');
				i--;
			}
			i++;
			_putchar('\\');
			_putchar('\n');
			n--;
		}
	}
}
