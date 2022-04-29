#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: integer
 * @y: integer
 */

int _pow_recursion(int x, int y)
{
	int h;
	if (y < 0)
		return (-1);
	else
		h = x * _pow_recursion(x, y - 1);
	return (h);
}
