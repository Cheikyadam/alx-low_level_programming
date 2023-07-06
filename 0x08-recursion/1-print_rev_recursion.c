#include "main.h"

/**
 * helper - to help
 * @s: the string
 *
 * Return: Nothing
 */

void helper(char *s)
{
	if (*s != '\0')
	{
		s++;
		helper(s);
		_putchar(*s);
		s--;
	}
}


/**
 * _print_rev_recursion  - reversing a string
 * @s: the string
 *
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	helper(s);
	_putchar('\n');
}
