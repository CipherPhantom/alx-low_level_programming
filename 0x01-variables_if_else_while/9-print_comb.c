#include <stdio.h>

/**
* main - Prints single digit numbers of base 10 with a comma and space
*	 at the end.
* Return: 0
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{

		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}

	putchar('\n');

	return (0);
}
