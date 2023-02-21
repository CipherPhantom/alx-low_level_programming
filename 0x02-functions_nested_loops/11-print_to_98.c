#include "main.h"

/**
 * two_digit_to_char - Prints two digit number
 * @t: two digit number
 */
void two_digit_to_char(int t)
{
	_putchar(t / 10 + '0');
	_putchar(t % 10 + '0');
}

/**
 * three_digit_to_char - Prints three digit number
 * @t: three digit number
 */
void three_digit_to_char(int t)
{
	_putchar(t / 100 + '0');
	_putchar(t / 10 + '0');
	_putchar(t % 10 + '0');
}

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: Starting integer
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		int m = n;

		if (m < 0)
		{
			m *= -1;
			_putchar('-');
		}
		if (m < 10)
		{
			_putchar(m + '0');
		}
		else
		{
			two_digit_to_char(m);
		}
		_putchar(',');
		_putchar(' ');
		n++;
	}
	while (n > 98)
	{
		if (n > 99)
			three_digit_to_char(n);
		else
			two_digit_to_char(n);
		_putchar(',');
		_putchar(' ');
		n--;
	}
	two_digit_to_char(98);
	_putchar('\n');
}
