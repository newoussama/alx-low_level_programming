#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid -  frees a 2 dimensional grid previously
 *		 created by your alloc_grid function
 * @grid: memories reserved
 * @height: int
 *
 * Description: function that frees a 2 dimensional grid previously
 *		created by your alloc_grid function
 *
 * Return: always 0 (success)
*/

void free_grid(int **grid, int height)
{
	int f = 0;

	for (; f < height; f++)
		free(grid[f]);
	free(grid);
}
