#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
 * free_grid: function to freed all memory allocated by
 *		another function
 * @grid: pointer to a pointer to an grid
 * @height: integer
 *
 * description: function that freed a allocation memory
 *
 * Return: return 0 (success)
*/

void free_grid(int **grid, int height)
{
	if (grid)
		free(grid);

}
