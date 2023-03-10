#include "main.h"

/**
 * times_table - Prints 9 times table, starting from 0
 */

void times_table(void)
{
	int n = 0;

	while (n < 10)
	{
		int m = 0;

		while (m < 10)
		{
			if (m != 0)
			{
				_putchar(',');
				_putchar(' ');
				if ((n * m) < 10)
					_putchar(' ');
			}
			if (n * m < 10)
			{
				_putchar(n * m + '0');
			}
			else
			{
				_putchar((n * m) / 10 + '0');
				_putchar((n * m) % 10 + '0');
			}
			m++;
		}
		_putchar('\n');
		n++;
	}
}
