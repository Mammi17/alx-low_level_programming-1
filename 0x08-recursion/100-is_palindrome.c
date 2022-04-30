#include "main.h"
/**
 * is_palindrome - evaluate if is true or false a palindrome
 * @s: pointer
 * Return: integer
 */

int is_palindrome(char *s)
{
	int h, l;

	l = _strlen_recursion(s);
	if (h < 1)
		return (1);
	if (*s == *(s + h))
	{
		h = h - 2;
		return (is_palindrome(s + 1));
	}
	return (0);
	l = l - 1;
	return (is_palindrome(s));
}


	
