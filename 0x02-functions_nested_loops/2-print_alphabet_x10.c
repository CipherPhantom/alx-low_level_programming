#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times.
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		for (char c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
		i++;
	}
}

