#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt - Finds the square root a anumber.
 * @n: The number.
 * @i: iterator.
 *
 * Return: root if numner is a perfect square else -1
 */
int _sqrt(int n, int i)
{
	if (n == (i * i))
		return (i);
	if (n < (i * i)
		return (-1);
	_sqrt(n, i + 1);
}

/**
 * _sqrt_recursion - Calls the function to compute the
 *  natural square root of a number.
 *  @n: number.
 *
 *  Return: the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
