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

	int th = d / 1000;
	int h = (d - (th * 1000)) / 100;
	int t = (d - (th * 1000 + h * 100)) / 10;
	int u = d % 10;

	if (th > 0)
		_putchar(th + '0');
	if (th > 0 || h > 0)
		_putchar(h + '0');
	if (th > 0 || h > 0 || t > 0)
		_putchar(t + '0');
	_putchar(u + '0');

}
