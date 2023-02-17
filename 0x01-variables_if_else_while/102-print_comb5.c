#include <stdio.h>

/**
* main - Prints all possible combinations of two two-digits numbers.
* Return: 0
*/

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			for (int k = 0; k < 10; k++)
			{
				for (int l = 0; l < 10; l++)
				{
					if (i * 10 + j < k * 10 + l)
					{

						putchar(i + '0');
						putchar(j + '0');
						putchar(' ');
						putchar(k + '0');
						putchar(l + '0');
						if ((i * 10 + j) != 98)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
