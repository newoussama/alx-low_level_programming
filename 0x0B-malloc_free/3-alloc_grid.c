#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
*/

int **alloc_grid(int width, int height)
{
	int **gri;
	int i, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	gri = malloc(sizeof(int *) * height);

	if (gri == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		gri[i] = malloc(sizeof(int) * width);

		if (gri[i] == NULL)
		{
			for (; i >= 0; i--)
				free(gri[i]);

			free(gri);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (y = 0; y < width; y++)
			gri[i][y] = 0;
	}
	return (gri);
}
