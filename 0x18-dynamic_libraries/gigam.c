#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - enter the code
 *
 * Return: an integer
 */

int main(void)
{
	write(1,"9 8 10 24 75 -9\n", 17);
	write(1, "Congratulation, you win the Jackpot!\n", 38);
	exit(EXIT_SUCCESS);
}
