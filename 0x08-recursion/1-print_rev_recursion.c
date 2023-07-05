#include "main.h"

/**
 * _print_rev_recursion  - reversing a string
 * @s: the string
 *
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		_putchar(*s);
		s--;
	}
	else
		return;
}
