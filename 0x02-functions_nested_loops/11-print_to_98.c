#include "main.h"


/**
 * display_integer - prints integer
 * @d: the integer
 */

void display_integer(int d)
{
	if (d < 10)
	{
		_putchar(d + '0');
	}
	else if (d < 100)
	{
		_putchar(d / 10 + '0');
		_putchar(d % 10 + '0');

	}
	else
	{
		_putchar(d / 100 + '0');
		_putchar((d - 100) / 10 + '0');
		_putchar(d % 10 + '0');
	}
}
/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: Starting integer
 */

void print_to_98(int n)
{
	while (n > 98)
	{
		display_integer(n);
		_putchar(',');
		_putchar(' ');
		n--;
	}

	while (n < 98)
	{
		int m = n;

		if (n < 0)
		{
			m *= -1;
			_putchar('-');
		}
		display_integer(m);
		_putchar(',');
		_putchar(' ');
		n++;
	}
	display_integer(98);
	_putchar('\n');
}
