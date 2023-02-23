#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n < 10)
		_putchar(n + '0');
	else if (n < 100)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n < 1000)
	{
		_putchar(n / 100 + '0');
		_putchar((n - ((n / 100) * 100)) / 10 + '0');
		_putchar(n % 10);
	}
	else
	{
		_putchar(n / 1000);
		_putchar((n - ((n / 1000) * 1000)) / 100 + '0');
		_putchar((n - ((n / 100) * 100)) / 10 + '0');
		_putchar(n % 10 + '0');
	}
}
