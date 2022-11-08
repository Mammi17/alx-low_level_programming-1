#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * strinng_nconcat - that concatenate two strings
 * @s1: a character
 * @s2: a caracter
 * @n: a integer
 * return: a pointer of function char
 */

char *string_nconncat(char *s1, char *s2, unsigned int n)
{
	char *point;
	unsigned int a, b, i;

	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	a = 0;
	b = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	point = (char *) malloc((a+n+1) * sizeof(char));
	for (i = 0; i <= a; i++)
	{
		point[i] = s1[i];
	}
	strncat(point, s2, n);
	return (point);
}
