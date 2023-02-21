#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @int: Any integer
 * Return: Absolute Number
 */
int _abs(int);

int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
