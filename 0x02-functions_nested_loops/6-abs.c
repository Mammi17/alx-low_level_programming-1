#include "main.h"

/**
 * main - print the absolue value of a number
 * @n: the integer to be computed
 *
 * Return: the value n or -n
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
