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
	int mul;

	if(argc < 2)
	{
		printf("error\n");
		return (1);
	}
	else
	{
		mul = argv[1] * argv[2];
		printf("%d\n", mul);
		return (0);
	}
}
