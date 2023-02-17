#include <stdio.h>

/**
* main - Prints all possible combinations of two two-digits numbers.
* Return: 0
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j < 10)
		{
			int k = 0;

			while (k < 10)
			{
				int l = 0;

				while (l < 10)
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
				l++;
				}
			k++;
			}
		j++;
		}
	i++;
	}

	putchar('\n');

	return (0);
}
