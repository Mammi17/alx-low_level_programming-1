#include <stdio.h>

/**
 * main - prints the name of program
 * @argc: an integer
 * @argv: a pointer
 * Return: 0
 */

int main (int argc _attribute_((unused)), char **argv)
{
	printf("The name of the program is: %s\n", argv[0]);
	return (0);
}
