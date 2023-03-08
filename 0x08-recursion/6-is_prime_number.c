#include "main.h"

int _is_prime(int, int);

/**
 * is_prime_number - Calls the function that determines if prime
 * @n: number
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	return (_is_prime(n, 2));
}

/**
 * _is_prime - Finds out if the input integer is a prime number.
 * @n: number
 * @i: iterator
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int _is_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		return (0);
	}
	_is_prime(n, i + 1);
}
