#ifndef FUNCTION_POINTERS_H
#define FUNCTION POINTERS_H

int _putchar(char c);

void print_name(char *name, (*f)(char *s));
void array_iterator(int *array, size_t size, void (*action)(int n));
int int_index(int *array, int size, int (*cmp)(int n));
#endif
