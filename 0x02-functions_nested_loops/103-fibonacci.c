#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int n, m = 1, next_term = 1, sum;

	while (next_term < 4000000)
	{
		n = m;
		m = next_term;
		next_term = n + m;
		if (next_term % 2 == 0)
			sum += next_term;
	}
	printf("%ld\n", next_term);
	return (0);
}
