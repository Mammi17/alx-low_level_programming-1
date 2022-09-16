#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/*
 * alloc_grid - that returns
 * @width: an integer
 * @height: an integer
 */

int **alloc_grid (int width, int height)
{
	int i, j, **point;

	if (width <= 0 || height <= 0)
		return (NULL);
	point = (int **) malloc(height * sizeof(int));
	if (point == NULL)
		return (NULL);
	for (j = 0; j < height; j++)
	{
		point = (int **) malloc(width * sizeof(int));
		if (point[j] == NULL)
		{
			free(point);
		}
		for (i = 0; i <= j; i++)
		{
			free(point[i]);
		}
		return (NULL);
	}
	for (j = 0; j < height; j++)
	{
		for (i = 0; i < width; i++)
		{
			point[j][i] = 0;
		}
	}
	return (point);
}
