#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 * Return: 0
 */

int main(void)
{
	char f[];

	f = _FILE_;
	printf("File: %s\n", f);

	return (0);
}
