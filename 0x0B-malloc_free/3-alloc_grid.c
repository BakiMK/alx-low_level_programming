#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 *
 * Return: baki
 */

int **alloc_grid(int width, int height)
{
	int **baki;
	int b, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	baki = malloc(sizeof(int *) * height);

	if (baki == NULL)
		return (NULL);

	for (b = 0; b < height; b++)
	{
		baki[b] = malloc(sizeof(int) * width);

		if (baki[b] == NULL)
		{
			for (; b >= 0; b--)
				free(baki[b]);

			free(baki);
			return (NULL);
		}
	}

	for (b = 0; b < height; b++)
	{
		for (y = 0; y < width; y++)
			baki[b][y] = 0;
	}
	return (baki);
}
