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
		int j = 0;

		while (n > 0)
		{
			int i = j;

			while (i > 0)
			{
				_putchar(' ');
				i--;
			}
			j++;
			_putchar('\');
			_putchar('\n');
			n--;
		}
	}
}
