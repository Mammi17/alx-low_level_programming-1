#include "main.h"
/**
 * main - main block
 *
 * Return: Always 0
 */
int main(void)
{
	int count = 0;
	char l;
	while (count++ <  10)
	{
		for (l = 'a'; l <= 'z'; l++)
	_putchar(l);
	_putchar('\n');
	return (0);
	}
}
