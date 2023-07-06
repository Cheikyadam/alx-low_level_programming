#include "main.h"

/**
 * helper - to help
 * @s: the string
 *
 * Return: Nothing
 */

void helper(char *s)
{	
	if (*s == '\0')
		;
	else
	{
		s++;
		helper(s);
		/*if (*s == '\\' && *(s + 1) == 'n')
			_putchar('\n');
		else
			_putchar(*s);*/
		_putchar(*s);
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
	char *p = s;
	
	helper(s);
	_putchar(*p);
}
