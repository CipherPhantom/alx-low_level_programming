#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 *  starting from 00:00 to 23:59.
 */

void jack_bauer(void)
{
	int h = 0;

	while (h < 24)
	{
		int m = 0;

		if (h < 10)
		{
			_putchar('0');
			_putchar(h + '0');
		}
		else
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
		}

		while (m < 60)
		{
			_putchar(':');
			if (m < 10)
			{
				_putchar('0');
				_putchar(m + '0');
			}
			else
			{
				_putchar(m / 10 + '0');
				_putchar(m % 10 + '0');
			}
			m++;
		}
		_putchar('\n');
		h++;
	}
}
