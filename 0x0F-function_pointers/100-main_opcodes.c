#include "calc.h"
#include <stdio.h>
#include <stlib.h>
#include <udis86.h>
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
	octet = atoi(argv[2]);
	opt = (char *)main;
	for (j = 0; j < octet; j++)
	{
		if (j == octet - 1)
			printf("");
		printf("%2hx",opt[i]);
	}
	if (octet < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
