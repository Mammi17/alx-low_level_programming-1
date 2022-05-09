!<arch>
/               0           0     0     0       18        `
     l_putchar  0-isupper.o/    0           0     0     644     200       `
#include "main.h"

/**
 * _isupper - checkes upper case
 * @c: print int
 * Return: give 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
0-memset.o/     0           0     0     644     274       `
#include "main.h"
/**
 * _memset - funtion that fills memory with a constant byte
 * @s: pointer
 * @b: a char
 * @n: unsigned int
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
0-strcat.o/     0           0     0     644     284       `
#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: pointer
 * @src: pointer
 * Return: a pointer
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a])
		a++;
	for (b = 0; src[b]; b++)
		dest[a++] = src[b];
	return (dest);
}
100.atoi.o/     0           0     0     644     351       `
#include "main.h"
/**
 * _atoi - convert to a int
 * @s: char
 * Return: int
 */
int _atoi(char *s)
{
	int a, b, c, d;

	a = c = 0;
	d = 1;
	while ((s[a] < '0' || s[a] > '9') && (s[a] != '\0'))
	{
		if (s[a] == '-')
			d *= -1;
		a++;
	}
	b = a;
	while ((s[b] >= '0') && (s[b] <= '9'))
	{
		c = (c * 10) + d * ((s[b]) - '0');
		b++;
	}
	return (c);
}

1-isdigit.o/    0           0     0     644     258       `
#include "main.h"
/**
 * _isdigit - checkes if the no is b/n 0 to 9
 * @c: input
 *
 * Return: 1 if is a number (0 to 9),0 in other case.
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
1-memcpy.o/     0           0     0     644     286       `
#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: pointer
 * @src: pointer
 * @n: unsigned int
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
1-strncat.o/    0           0     0     644     358       `
#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: pointer
 * @src: pointer
 * @n: integer
 * Return: a pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[a])
		a++;
	for (b = 0; (src[b] != '\0') && (n > b); b++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = '\0';
	return (dest);
}
2-strchr.o/     0           0     0     644     316       `
#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: pointer
 * @c: a char
 * Return: a pointer
 */
char *_strchr(char *s, char c)
{
	int i, j;

	i = 0;
	while (s[i])
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		if (c == s[j])
		{
			s += j;
			return (s);
		}
	}
	return ('\0');
}
2-strlen.o/     0           0     0     644     180       `
#include "main.h"

/**
 * _strlen - length of a string
 * @s: a pointer
 * Return: 0
 */

int _strlen(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
3-islower.o/    0           0     0     644     224       `
#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: the character to be checked
 *
 * Return: Always 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
3-puts.o/       0           0     0     644     184       `
#include "main.h"
/**
 * _puts - prints a string
 * @str: a pointer
 */
void _puts(char *str)
{
	int m;

	for (m = 0; str[m] != '\0'; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
3-strcmp.o/     0           0     0     644     288       `
#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: pointer
 * @s2: pointer
 * Return: a int
 */

int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] != '\0' || s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
	}

	return (0);
}
3-strspn.o/     0           0     0     644     365       `
#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer
 * @accept: pointer
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k;

	i = 0;
	k = 0;
	while (accept[i])
	{
		j = 0;
		while (s[j] != 32)
		{
			if (accept[i] == s[j])
				k++;
			j++;
		}
		i++;
	}
	return (k);
}

4-isalpha.o/    0           0     0     644     261       `
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 *
 * Return: Always 1 or 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

4-strpbrk.o/    0           0     0     644     369       `
#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: pointer
 * @accept: pointer
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				s += i;
				return (s);
			}

			j++;
		}

		i++;
	}
	return ('\0');
}

5-strstr.o/     0           0     0     644     431       `
#include "main.h"
/**
 * _strstr - function that gets the length of a prefix substring
 * @haystack: pointer
 * @needle: pointer
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	i = 0;
	j = 0;
	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
				break;
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
		i++;
	}
	return ('\0');
}

6-abs.o/        0           0     0     644     207       `
#include "main.h"

/**
 * _abs - print the absolue value of a number
 * @n: the integer to be computed
 *
 * Return: the value n or -n
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}

9-strcpy.o/     0           0     0     644     244       `
#include "main.h"
/**
 * _strcpy - copies src to dest
 * @dest: char
 * @src: char
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	a = 0;
	while (src[a])
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
_putchar.o/     0           0     0     644     1576      `
ELF          >                    �          @     @   ��UH��H�����E�H�E��   H�ƿ   �    �� GCC: (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0              GNU   �                 zR x�            )    E�C`                               ��                                                                                                                                                                                       )                             +                       _putchar.c _putchar _GLOBAL_OFFSET_TABLE_ write        #             ��������                       .symtab .strtab .shstrtab .rela.text .data .bss .comment .note.GNU-stack .note.gnu.property .rela.eh_frame                                                                                           @       )                                    @               H             
                    &                     i                                      ,                     i                                      1      0               i       +                             :                      �                                      J                     �                                      b                     �       8                              ]      @               `             
                                          �                 	                 	                            1                                                    x      l                              