#include <stdio.h>
#include <stdlib.h>

/**
 * main- prints adds positive numbers
 * @argc: integer
 * @argv: pointer
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, add = 0, n, k;

	if (argc == 1)
	{
		printf("0");
		printf("\n");
	}
	for (i = 1; i < argc; i++)
	{
		for (k = 1;  argv[i][k] != '\0'; k++)
		{
			if (argv[i][k] < '0' || argv[i][k] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		n = atoi(argv[i]);
		add += n;
	}
		printf("%d\n", add);
		return (0);
}
