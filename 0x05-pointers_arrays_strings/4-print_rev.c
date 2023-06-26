#include "main.h"

/**
 * print_rev - print string rev
 * @s: The string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (j = i; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
