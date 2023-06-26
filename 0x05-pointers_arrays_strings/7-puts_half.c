#include "main.h"

/**
 * puts_half - print string half
 * @str: The string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int j;
	int it;

	for (i = 0; str[i] != '\0'; i++)
		;
	it = (i / 2);
	for (j = it; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
