#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: board rows
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	while (a[i][j] != '\0')
	{
		j = 0;

		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
