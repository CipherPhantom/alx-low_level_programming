#include <stdio.h>

/**
* main - Prints the all the numbers of base 16 in lowercase
* Return: 0
*/
int main(void)
{
	int i = 0;

	while (i < 16)
	{
		if (i > 9)
			putchar('a' + i % 10);
		else
			putchar(i + '0');
		i++;
	}

	putchar('\n');

	return (0);
}
