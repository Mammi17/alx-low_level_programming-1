#include <stdio.h>
#include <stdlib.h>

/**
 * main- prints the name of programm
 * @argc: integer
 * @argv: pointer
 * Return: 0 or 1
 */

int main(int argc, char **argv)
{
	int mul, n1, n2;

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	if (argc <= 3)
	{
		printf("error\n");
		return (1);
	}
	else
	{
		mul = n1 * n2;
		printf("%d\n", mul);
		return (0);
	}
}
