#include <stdio.h>

/**
* main - Prints all posible different combinations of two digits.
* Return: 0
*/

int main(void)
{
	int i = 1;

	for (int j = 0; j < 9; j++)
	{
		for (int k = i; k < 10; k++)
		{
			putchar(j + '0');
			putchar(k + '0');
			if (i < 9)
			{
				putchar(',');
				putchar(' ');
			}

		}
		i++;
	}

	putchar('\n');

	return (0);
}
