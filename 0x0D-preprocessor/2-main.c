#include <stdio.h>
/**
 * main - prints the name of the file it was compiled from
 * Return: 0
 */

int main(void)
{
	int argc;
	char *argv;

	printf("FILE:%s\n", _FILE_);
	return (0);
}
