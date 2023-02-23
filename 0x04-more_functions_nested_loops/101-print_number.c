#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer
 */

void print_number(int n)
{
	int i = n;

	if (i < 0)
	{
		_putchar('-');
		i *= -1;
	}
	int th = i / 1000;
	int h = (i - (th * 1000)) / 100;
	int t = (i - (th * 1000 + h * 100)) / 10;

	if (th > 0)
		_putchar(th + '0');
	else if (th > 0 || h > 0)
		_putchar(h + '0');
	else if (th > 0 || h > 0 || t > 0)
		_putchar(t + '0');
	else
		break;
	_putchar(i % 10);
}
