#include "main.h"
/**
 * is_prime_number - that returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: integer
 * Return: integer
 */

int is_prime_number(int n)
{
	int i;

	for (i = 2; i!= n; i++)
	{
		if (n % i == 0)
			return (1);
		else
			return (0);
	}
	return (is_prime_number(n+1));
}
