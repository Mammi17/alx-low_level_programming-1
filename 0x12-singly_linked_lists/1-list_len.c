#include "lists.h"
#include <stdio.h>
/**
 * list_len - that returns of elements a linked list_t
 * @h: pointer
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	size_t a;
	const list_t *current;

       a = 0;
       current = h;
       while (current != NULL)
       {
	       a++;
	       current = current->next;
       }
       return (a);
}
