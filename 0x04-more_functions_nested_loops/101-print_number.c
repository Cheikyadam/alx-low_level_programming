#include "main.h"

/**
 * print_number - printing
 * @n: the number to be print
 *
 * Return: void
 */

void print_number(int n)
{
int i;
int cpt = 0;
int mul = 10;

if (n < 0)
{
_putchar('-');
n = -n;
}

while (n % mul != n)
{
mul = mul * 10;
cpt++;
}
mul = mul / 10;

for (i = 1; i <= cpt; i++)
{
_putchar(48 + ((n - (n % mul)) / mul));
n = n % mul;
mul = mul / 10;
}
_putchar(48 + n);
}
