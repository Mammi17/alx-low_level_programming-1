#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float e;
	printf("Size of an int is: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int is: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int is: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a char is: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float is: %lu byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
