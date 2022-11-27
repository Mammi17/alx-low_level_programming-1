#include <stdio.h>
#include <stdlib.h>
/**
 * main - that print the opcodes of its own main function
 * @argc: an integer
 * @argv: a charactere
 * Return: an integer
 */
int main(int argc, char **argv)
{
	int octet, j;
	char *opt;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	octet = atoi(argv[1]);
	opt = (char *)main;
	for (j = 0; j < octet; j++)
	{
		if (j == octet - 1)
		{
			printf("%02hhx\n", opt[j]);
			break;
		}
		printf("%02hhx", opt[j]);
	}
	if (octet < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
