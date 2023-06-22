#include "main.h"
/**
 * print_times_table - timetable
 * @n:table of n
 *
 * section header : including main.h
 * Return: void
 */

void print_times_table(int n)
{
int i;
int j;
int p;
int q;

if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
p = i * j;
if (p < 10)
{
_putchar(48 + p);
}
else
{
if (p < 100)
{
_putchar(48 + ((p - (p % 10)) / 10));
_putchar(48 + (p % 10));
}
else
{
_putchar(48 + ((p - (p % 100)) / 100));
q = p % 100;
_putchar(48 + ((q - (q % 10)) / 10));
_putchar(48 + (p % 10));
}
}
if (j != n)
{
if ((i * (j + 1)) < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
}
else
{
if ((i * (j + 1)) < 100)
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
}
_putchar('\n');
}
}
}
