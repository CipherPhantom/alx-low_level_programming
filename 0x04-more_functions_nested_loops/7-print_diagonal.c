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
		int i = n;
		int j = 0;

		while (i > 0)
		{
			int k = j;

			while (k > 0)
			{
				_putchar(' ');
				k--;
			}
			j++;
			_putchar('\\');
			_putchar('\n');
			i--;
		}
	}
}
