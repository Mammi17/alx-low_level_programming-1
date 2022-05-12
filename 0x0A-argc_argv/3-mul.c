#include <stdio.h>
#include <stdlib.h>

/**
 * main- prints the name of programm
 * Return: 0
 */

int main(int argc)
{
	int a, b, mul;

	if(argc < 2)
	{
		printf("error\n");
		return (1);
	}
	else
	{
		mul = a * b;
		printf("%d\n", mul);
		return (0);
	}
}
