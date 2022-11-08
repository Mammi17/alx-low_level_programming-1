#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _calloc - function thats allocates memory for array
 * @nmemb: a integer
 * @size: a integer
 * return: a void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *point;
	char *x;
	unsigned int i;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	point = (char *) malloc(nmemb * size);
	x = point;
	i = 0;
	while (i <= nmemb * size)
	{
		x[i] = 0;
		i++;
	}
	return (point);
}
