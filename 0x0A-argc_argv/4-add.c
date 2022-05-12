#include <stdio.h>
#include <stdlib.h>

/**
 * main- prints adds positive numbers
 * @argc: integer
 * @argv: pointer
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, add = 0;

	if(argc <= 1)
	{
		printf("0\n");
	}
	else if (argv[] != "%d")
	{
		printf("error\n");
		return (1);
	}
	for (i=1; i <= argc; i++)
	{
		if (argv[] > 0)
		{
			add += argv[i];
			printf("%d\n", add);
			return (0);
		}
	}
}
