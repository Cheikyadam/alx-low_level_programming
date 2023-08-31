#include "main.h"

/**
 * print_binary - printing the binary of an int
 * @n: the integer
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	int bits = sizeof(unsigned long int) * 8;
	int leadingZeroes = 1;
	int i;

	for (i = bits - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			leadingZeroes = 0;
			_putchar('1');
		}
		else if (!leadingZeroes)
		{
			_putchar('0');
		}
	}

	if (leadingZeroes)
	{
		_putchar(48);
	}
}
