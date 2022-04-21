#include "main.h"
/**
 * rev_string - prints a reverse a string
 * @s: a pointer char
 */

void rev_string(char *s)
{
	int i, j;
	char str;

	i = 0;
	j = 0;
	while (*(s + i))
	{
		*(str + i) = *(s + i);
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + i) = *(str + j);
		j++;
		i--;
	}
}
