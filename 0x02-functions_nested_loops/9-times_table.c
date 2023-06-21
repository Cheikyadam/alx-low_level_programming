#include "main.h"
/**
 * times_table - timetable
 *
 * section header : including main.h
 * Return: void
 */

void times_table(void)
{
int i;
int j;
int p;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
p = i * j;
if (p < 10)
{
_putchar(48 + p);
}
else
{
_putchar(48 + ((p - (p % 10)) / 10));
_putchar(48 + (p % 10));
}
if (j != 9)
{
if ((i * (j + 1)) < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
}
