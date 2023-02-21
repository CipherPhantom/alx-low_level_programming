#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int n, m = 1, next_term = 1;
	int i = 0;

	while (i < 50)
	{
		printf("%ld", next_term);
		n = m;
		m = next_term;
		next_term = n + m;
		if (i < 49)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	return (0);
}
