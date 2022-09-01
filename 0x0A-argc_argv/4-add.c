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

	if(argc == 1)
	{
		printf("0\n");
	}
	for (i=1; i < argv; i++)
	{
		if (argv[i] <'0' || argv[i] >'9')
		{
			printf("Error\n");
			return (1);
		}
	}
	for (i=1; i < argc; i++)
	{
		n=atoi(argv[i])
		add += n;
	}
		printf("%d\n", add);
		return (0);
}
