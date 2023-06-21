#include "main.h"

/**
 * print_last_digit - determine last digit
 * @n: the last digit of this number
 *
 * section header : including main.h
 * Return: the last digit  of the parameter
 */

int print_last_digit(int n)
{
if (n < 0)
n = -n;
_putchar(48 + (n % 10));
return (n % 10);
}
