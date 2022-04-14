#include "main.h"
/**
 * main - main block
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char l;
	while (count++ <  10)
	{
		for (l = 'a'; l <= 'z'; l++)
	_putchar(l);
	_putchar('\n');
	}
}
