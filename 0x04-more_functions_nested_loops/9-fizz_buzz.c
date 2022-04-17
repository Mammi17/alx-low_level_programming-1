#include <stdio.h>

/**
 * main - prints fizz for int divisible by 3 and buzz for 5
 * Return: 0
 */

int main(void)
{
	int i;

	i = 0;
	while (i <= 100)
		{
			if ((i % 3 == 0) && (i % 5 == 0))
			{
				printf("FizzBuzz");
			}
			else if (i % 3 == 0)
			{
				printf("Fizz");
			}
			else if (i % 5 == 0)
			{
				if (i < 100)
					printf("Buzz");
				else
					printf("Buzz");
			}

			else
			{
				printf("%i", i);
			}
			putchar(' ');
			
			i++;
		}
	printf("\n");
	return (0);
}
