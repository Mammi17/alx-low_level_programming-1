#include "main.h"

/**
 * print_times_table - prints the time table of the input, 
 * starting with 0
 * @n: the value of the times table
 */
void print_times_table(int n)
{
	int numb, mult, prod;

	if (n >= 0 && n <= 15)
	{
		for (numb =0; numb <= n; numb++)
			_putchar('0');

		for (mult = 1; mult <= n; mult++)
		{			
			_putchar(',');
			_putchar(' ');

			prod = numb * mult;

			if (prod >= 90)
				_putchar(',');
			if (prod <= 9)
				_putchar(' ');
			if (prod >= 100)
			{
				_putchar((prod / 100) + '0');
				_putchar(((prod / 10) % 10) + '0');
			}
			else if (prod <=90 && prod >= 10)
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
