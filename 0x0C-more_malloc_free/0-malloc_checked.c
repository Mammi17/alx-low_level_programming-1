#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: a integer
 */

void *malloc_checked(unsigned int b)
{
	void *h;

	h = malloc(b);
	if  (h == NULL)
		exit(98);
	return (h);
}
