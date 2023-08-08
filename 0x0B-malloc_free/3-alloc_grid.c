#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid: malloc function that allocate memory with 2 D
 *
 * @height: integer
 * @width: integer
 *
 * description: a function that allocate memory in
 *		2D ARRAY
 *
 * Return: 0 or pointer (success)
*/

int **alloc_grid(int width, int height)
{
	int **arr2D, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr2D = (int **)malloc(height * (sizeof(int *)));

	for (i = 0; i < height; i++)
	{
		arr2D[i] = (int *)malloc(width * (sizeof(int)));

		if (arr2D[i] == NULL) 
		{
			for (j = 0; j < i; j++)
                		free(arr2D[j]);
		}
		free(arr2D);
		return (NULL);
	}
	for (j = 0; j < width; j++)
			arr2D[i][j] = 0;
	if (arr2D == NULL)
	{
		return (NULL);
		free(arr2D);
	}
	return (arr2D);
}
