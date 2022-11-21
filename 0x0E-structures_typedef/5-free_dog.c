#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - function that frees dog
 * @d: a structure
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return (NULL);
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}
