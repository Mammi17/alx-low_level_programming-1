#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strtow - splits a string into words
 * @str: a pointer
 * return: point
 */

char **strtow (char *str)
{ 
	char **point, other;
	int i, j, l, a;

	/*
	if (str == "")
	       return (NULL);
	*/
	if (str == NULL)
		return (NULL);
	
	a = 1;
	/*
	for (j = 1; str[j] != '\0'; j++)
			a++;

	point = (char **) malloc(a  * sizeof(char));
	if (point == NULL)
		return (NULL);
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
	**point = '\n';
	return (point);
	*/
	for (j = 0; str[j] != '\0'; j++)
	{
		if (str[j] == ' ')
			a++;
	}
	point = (char **) malloc(a  * sizeof(char*));
	if (point == NULL)
		return (NULL);
	for (j = 0, i , l = 0; str[j] != '\0'; l++)
	{
		for (i = j; str[i] != '\0'; i++)
		{
			if (str[i] != ' ')
			{
				point[l] = (char *) malloc((i-j+2) * sizeof(char));
				strncpy (point,str,i-j);
			}
		}
		j = i + 1;
	}
	return (point);
}
