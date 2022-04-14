#include "main.h"

/**
 * main - chheck code
 *
 * Return: Always 0
 */
int print_last_digit(int)
{
	int digit,a;
	digit = a % 10;
	if (digit < 0)
		digit *= -1;

	_putchar(digit + '0');
	return (digit);
}
