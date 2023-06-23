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
int c;

for (i = 0; i <= 9; i++)
{
c = 48;
for (r = 48; r <= 62; r++)
{
if (r >= 58)
{
_putchar(49);
}
if (r == 58)
{
c = 48;
}
_putchar(c);
c++;
}
_putchar('\n');
}
}
