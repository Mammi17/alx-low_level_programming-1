#include "main.h"
#include <stdio.h>
#include <stdlib>

/*
 * strtow - splits a string into words
 * @str: a pointer
 * return: a pointer
 */

char **strtow (char *str)
{ 
	char **point;
	int i, j, a;


	if (str == "")
		return (NULL);
	if (str == NULL)
		return (NULL);
	a = 1;
	for (j = 1; str[j] != '\0'; j++)
			a++;

	point = (char **) malloc(a  * sizeof(char));
	for (j = i = 0; str[j] < a; j++)
	{
		if (str[j] == ' ')
		{
			j++;
			i++;
		}
		else 
		{
			point[i] = (char *) malloc(i * sizeof(char));
			point[i] = &str[j];
		}
	}
	**point = '\0';
	return (point);
	if (point == NULL)
	{
		return (NULL);
	}
