#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer
 */

void print_number(int n)
{
	int d = n;

	if (d < 0)
	{
		_putchar('-');
		d *= -1;
	}

	if (d  < 10)
		_putchar(d + '0');
	else if (d < 100)
	{
		_putchar(d / 10 + '0');
		_putchar(d % 10 + '0');
	}
	else if (n < 1000)
	{
		_putchar(d / 100 + '0');
		_putchar((d - ((d / 100) * 100)) / 10 + '0');
		_putchar(d % 10 + '0');
	}
	else
	{
		_putchar(d / 1000 + '0');
		_putchar((d - ((d / 1000) * 1000)) / 100 + '0');
		_putchar((d - ((d / 100) * 100)) / 10 + '0');
		_putchar(d % 10 + '0');
	}
}
