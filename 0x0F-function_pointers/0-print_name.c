#include "function_pointers.h"

/**
 * print_name - printing name
 * @name: the name to be printed
 * @f: a function pointer
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		(*f)(name);
}
