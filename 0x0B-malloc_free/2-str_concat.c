#include "main.h"
#include <string.h>
/*
 * str_concat - function that concatenates two string
 * @s1: a pionter
 * @s2: a pionter
 */

char *str_concat (char *s1, char s2)
{
	int i, j, t;
	char *point;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	t = i + j;
	point = (char *)malloc(t * sizeof(char));
	if (point = NULL)
		return (NULL);
	else
		point = strcat(s1,s2);
	return (point);
}
