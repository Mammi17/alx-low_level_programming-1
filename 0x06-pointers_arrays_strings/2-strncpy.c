#include "main.h"
/**
 * _strncpy - function that copy a string
 * @dest: pointer
 * @src: pointer
 * Return: a pointer
 */

char *_strcat(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && (src[a] = '\0'); a++)
	{
		dest[a] = src[a];
	}
	for (a = 0; n > a; a++)
		dest[a] = '\0';

	return (dest);
}
