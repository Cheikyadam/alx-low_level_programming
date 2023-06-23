#include "main.h"

/**
 * print_triangle - triangle
 * @size: size
 *
 * Return: void
 */

void print_triangle(int size)
{
int i;
int j;
int k;

if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size - i; j++)
{
_putchar(' ');
}
for (k = j; k <= size; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
