#include <main.h>

/*
 * create_array - creates an array of chars and initializes
 * @size : an integer
 * @c : a char
 * Return : NULL
 */

char *create_array (unsigned int size, char c)
{
	int j;
	*char point;
	point = (char *)malloc(size * sizeof(char));
	if (point == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		point[i] = c;
	}
	return (0);
	if (size == 0)
		return (NULL);
}
