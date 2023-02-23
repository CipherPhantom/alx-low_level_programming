#include "main.h"

/**
 * print_square - Prints a square, followed by a new line.
 * @size: size of the square.
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i =  size;

		while (i > 0)
		{
			int width = size;

			while (width > 0)
			{
				_putchar('#');
				width--;
			}
			_putchar('\n');
			i--;
		}
	}
}
