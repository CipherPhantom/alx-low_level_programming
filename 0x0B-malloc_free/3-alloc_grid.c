#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - Creates a grid.
 * @width: Width.
 * @height: Height.
 *
 * Return: Apointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid = (int **)malloc(sizeof(int *) * height);

	for (i = 0; i < width; i++)
		grid[i] = (int *)malloc(sizeof(int) * width);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
