#include <stdio.h>
#include <stdlib.h>

/**
 * main- prints adds positive numbers
 * @argc: integer
 * @argv: pointer
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int i, add = 0, n, k, l;

	if (argc == 1)
		printf("0\n");

	for (i = 1; i < argc; i++)
	{
		for (k = 0;  argv[i][k] != '\0'; k++)
		{
			if (argv[i][k] < '0' || argv[i][k] > '9')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}
	for (l = 1; l < argc; l++)
	{
		n = atoi(argv[l]);
		add += n;
	}
		printf("%d\n", add);
		return (0);
}
