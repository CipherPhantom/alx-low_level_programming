#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: number.
 */
void print_binary(unsigned long int n)
{
	unsigned long int num;
	int c, i = 0;

	if (n == 0)
		_putchar('0');
	num = n;
	while (num != 0)
	{
		num = num >> 1;
		i++;
	}
	while (i > 0)
	{
		num = n >> (i - 1);
		c = n - (num << (i - 1));
		_putchar(num + '0');
		n = c;
		i--;
	}
}
