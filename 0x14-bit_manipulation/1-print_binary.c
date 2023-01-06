#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_binary - tha prints the binary representation number
 * @n: an unsigned integer
 * Return: an integer
 */

int print_binary(unsigned long int n)
{
	unsigned long int b;
	if (n > 1)
	{
		b = n >> 1;
		print_binary(b);
	}
	write(1, &((n & 1) + '0'), 1);
}
