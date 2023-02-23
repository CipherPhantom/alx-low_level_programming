#include <stdio.h>

/**
 * main - Prints the largest prime factor of the number 612852475143.
 *
 * Return: 0
 */

int main(void)
{
	unsigned int i = 1, factor = 0;

	while (i < 612852475143)
	{
		if (612852475143 % i == 0)
			factor = i;
		i++;
	}
	return (0);
}
