#include "main.h"

/**
 * print_int_times_table - Prints integer
 * @n: first integer
 * @m: second integer
 */
void print_int_times_table(int n, int m)
{
	if (m != 0)
	{
		_putchar(',');
		_putchar(' ');
		if (n * m < 10)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(n * m + '0');
		}
		else if (n * m < 100)
		{
			_putchar(' ');
			_putchar((n * m) / 10 + '0');
			_putchar((n * m) % 10 + '0');
		}
		else
		{
			_putchar((n * m) / 100 + '0');
			_putchar(((n * m) - 100) / 10 + '0');
			_putchar((n * m) % 10 + '0');
		}
	}
}


/**
 * print_times_table - Prints times table, starting from 0
 * @d: End integer
 */

void print_times_table(int d)
{
	int n = 0;

	while (n <= d)
	{
		int m = 0;

		while (m <= d)
		{
			if (m == 0)
				_putchar(0 + '0');
			else
				print_int_times_table(n, m);
			m++;
		}
		_putchar('\n');
		n++;
	}
}
