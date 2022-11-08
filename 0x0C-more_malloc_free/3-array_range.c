#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * array_range - that create an array of integers
 * @min: an integer
 * @max: an integer
 * return: an integer
 */

int *array_range(int min, int max)
{
	int *point, i;

	if (min > max)
	{
		return (0);
	}
	point = (int *) malloc((max-1) * sizeof(int));
	if (point == 0)
		return (0);
	for (i = min; i <= max; i++)
	{
		point[i] = min++;
	}
	return (point);
}
