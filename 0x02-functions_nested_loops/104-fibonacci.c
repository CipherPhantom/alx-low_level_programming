#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int n = 0, m = 1, next_term = 1;
	int i = 0;

	while (i < 98)
	{
		printf("%lu", next_term);
		n = m;
		m = next_term;
		next_term = n + m;
		printf("%lu %lu %lu\n", n, m, next_term);
		if (i < 97)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
