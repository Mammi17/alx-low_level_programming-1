#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of two diagonals of square matrix
 * @a: pointer
 * @size: the size
 */

void print_diagsums(int *a, int size)
{
	int i, s1, s2;

	i = 0;
	s1 = 0;
	s2 = 0;
	while(i < size)
	{
		s1 += a[(size + 1) * i];
		s2 += a[(size + 1) * (i + 1)];
	}
	printf( "%d, %d\n",s1, s2);
}
