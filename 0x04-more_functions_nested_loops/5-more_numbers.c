#include "main.h"

/**
 * more_numbers - printing
 *
 * Return: void
 */

void more_numbers(void)
{
char r;
int i;

for (i = 0; i <= 9; i++)
{
for (r = 48; r <= 57; r++)
{
_putchar(r);
}
for (r = 48; r <= 52; r++)
{
_putchar(49);
_putchar(r);
}
_putchar('\n');
}
}
