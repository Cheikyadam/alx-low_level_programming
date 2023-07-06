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
	char *p;

	if (*s == '\0')
		return (1);
	for (p = s; *p != '\0'; p++)
	{
		;
	}
	p--;
	if (*s == *p)
	{
		*p = '\0';
		s++;
		is_palindrome(s);
	}
	return (0);
}
