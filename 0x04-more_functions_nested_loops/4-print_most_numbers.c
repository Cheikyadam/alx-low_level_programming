#include "main.h"

/**
 * print_most_numbers - printing
 *
 * Return: void
 */

void print_most_numbers(void)
{
char r;
for (r = 48; r <= 57; r++)
if (r != 50 && r != 52)
{
_putchar(r);
}
_putchar('\n');
}
