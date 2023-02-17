#include <stdio.h>

/**
* main - Prints all possible different combinations of three digits.
* Return: 0
*/

int main(void)
{
	int x = 1;
	int i = 0;

	while (i < 8)
	{
		int y = 2;
		int j = x;

		while (j < 9)
		{
			int k = y;

			while (k < 10)
			{
				if (k > j)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i < 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
			y++;
		}
		i++;
		x++;
	}

	putchar('\n');

	return (0);
}
