#include "main.h"
/**
 * _strncat - function that is similar to the _strcat exceptes src will use most n bytes
 * @dest: pointer
 * @src: pointer
 * Return: a pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[a])
		a++;
	for (b = 0; src[b] != '\0' && n > b; b++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = '\0';
	return (dest);
}
