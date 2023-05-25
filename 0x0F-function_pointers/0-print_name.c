#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - the fuction that prints the name
 * @name: the name to be printed
 * @f: a pointer to the function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
