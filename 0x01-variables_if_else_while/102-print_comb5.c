#include <stdio.h>

/**
* main - Prints all possible combinations of two two-digits numbers.
* Return: 0
*/

int main(void)
{
	int i = 0;

	while (i < 100)
	{
		int j = 0;

		while (j < 100)
		{
			if (i < j)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');
				if (i != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		j++;
		}
	i++;
	}

	putchar('\n');

	return (0);
}
