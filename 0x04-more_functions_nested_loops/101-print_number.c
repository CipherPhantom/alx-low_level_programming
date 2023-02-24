#include "main.h"
#include <math.h>

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

	int p = -1;
	int m = 1;

	while (1)
	{
		if (d / m != 0)
		{
			m *= 10;
			p++;
		}
		else
		{
			break;
		}
	}
		while (p > -1)
		{
			unsigned int t = pow(10, p);

			_putchar((d / t) % 10 + '0');
			p--;
		}
}
