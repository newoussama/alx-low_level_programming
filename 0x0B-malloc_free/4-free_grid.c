#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2dimension array
 * @grid: 2dimension grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: NULL
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
