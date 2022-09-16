#include < main.h>
#include <string.h>

/*
 * strdup - returns a pointer to a newly allocated space in memory
 * @str : a pointer
 * return: NULL
 */

char *strdup (char *str)
{
	char *point;

	if (str == NULL)
		return (NULL);
	point = (char *)malloc(str sizeof(char));
	if (point == NULL)
		return (NULL);
	strcpy(point, str);
	return (point)
}
