#include "main.h"

/**
 * print_triangle - Prints a triangle, followed by a new line.
 * @size: size of the triangle.
 */

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int m = 1;

		while (size > 0)
		{
			int width = size - 1;
			int n = m;

			while (width > 0)
			{
				_putchar(' ');
				width--;
			}

			while (n > 0)
			{
				_putchar('#');
				n--;
			}
			_putchar('\n');
			size--;
			m++;
		}
	}
}
