#include <stdio.h>

/**
* main - Prints all possible different combinations of three digits.
* Return: 0
*/

int main(void)
{
	int x = 1;

	for (int i = 0; i < 8; i++)
	{
		int y = 2;

		for (int j = x; j < 9; j++)
		{
			for (int k = y; k < 10; k++)
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
			}
			y++;
		}
		x++;
	}

	putchar('\n');

	return (0);
}
