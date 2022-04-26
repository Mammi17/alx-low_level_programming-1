#include "main.h"
/**
 * _strncpy - function that copy a string
 * @dest: pointer
 * @src: pointer
 * @n: integer
 * Return: a pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	for (; n > a; a++)
		dest[a] = '\0';

	return (dest);
}
