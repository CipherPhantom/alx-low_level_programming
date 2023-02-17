#include <stdio.h>

/**
* main - Prints the all the numbers of base 16 in lowercase
* Return: 0
*/
int main(void)
{
	for (int i = 0; i < 16; i++)
	{
		if (i > 9)
			putchar('a' + i % 10);
		else
			putchar(i + '0');
	}

	putchar('\n');

	return (0);
}
