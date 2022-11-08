#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * main - that multiplie two positives numbers
 * @argv: a pointer
 * @argc: an integer
 * return: the value int
 */
int main(int argc, char **argv)
{
	int j, l;
	unsigned long int mul;
	char *num1, *num2;

	if (argc != 3)
	{
		printf("error\n");
		exit(98);
	}
	/*for (j = 0; j < argc; j++)
	{
		for (l = 0; argv[j][l] != '\0'; l++)
		{
			if (argv[j][l] >= 56 || argv[j][l] <= 47)
			{
				printf("error\n");
				exit(98);
			}
		}
	}*/
		num1 = argv[1];
		num2 = argv[2];
		mul = atoi(num1) * atoi(num2);
			printf("%lu\n", mul);
		return (0);
}
