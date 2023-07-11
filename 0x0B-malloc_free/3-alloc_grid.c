#include "main.h"

/**
 * alloc_grid - dimensional array of integers
 *
 * Description: function that returns a pointer to a
 *		2 dimensional array of integers
 *
 * @width: int
 * @height: int
 *
 * Return: always  0 (success)
*/

int **alloc_grid(int width, int height)
{
	int **rzt, p, m;

	rzt = malloc(sizeof(*rzt) * height);

	if (width <= 0 || height <= 0 || rzt == 0)
	{
		return (NULL);
	}
	else
	{
		for (p = 0; p < height; p++)
		{
			rzt[p] = malloc(sizeof(**rzt) * width);
			if (rzt[p] == 0)
			{
				while (--p)
					free(rzt[p]);
				free(rzt);
				return (NULL);
			}
			for (m = 0; m < width; m++)
				rzt[p][m] = 0;
		}
	}
	return (rzt);
}
