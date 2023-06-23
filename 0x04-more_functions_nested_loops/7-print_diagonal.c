#include "main.h"

/**
 * print_diagonal - diagonale
 * @n: times
 *
 * Return: void
 */

void print_diagonal(int n)
{
int i;
int j;

if (n > 0)
{
for (i = 1; i <= n; i++)
{
for (j = 1; j <= i - 1; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
