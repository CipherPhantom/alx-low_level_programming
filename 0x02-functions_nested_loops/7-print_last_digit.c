#include "main.h"

/**
 * print_last_digit - Prints last digit of a number.
 * @n: Any integer
 *
 * Return: last_digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;
	_putchar(n % 10 + '0');
	return (n % 10);
}
