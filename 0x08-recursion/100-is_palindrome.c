#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - palindrome
 * @s: string
 *
 * Return: an int
 */

int is_palindrome(char *s)
{
	char *p = s;

	if (*s == '\0')
		return (1);
	s++;
	is_palindrome(s);

	if (*p != *s)
		return (0);
}
