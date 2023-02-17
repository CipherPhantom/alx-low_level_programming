#include <stdio.h>

/**
* main - Prints all posible different combinations of two digits.
* Return: 0
*/

int main(void)
{
	int i = 1;
	int j = 0;

	while (j < 9)
	{
		int k = i;

		while (k < 10)
		{
			putchar(j + '0');
			putchar(k + '0');
			if (i < 9)
			{
				putchar(',');
				putchar(' ');
			}
			k++;
		}
		j++;
		i++;
	}

	putchar('\n');

	return (0);
}
