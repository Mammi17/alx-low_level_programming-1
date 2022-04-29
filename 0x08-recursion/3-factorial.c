#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: integer
 */

int factorial(int n)
{
	int h;

	if (n < 0)
		return (-1);
	else
		h = n * factorial(n - 1);
	return (h);
}
