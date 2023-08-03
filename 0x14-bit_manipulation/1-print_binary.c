#include "main.h"

/**
 * print_binary - printing the binary of an int
 * @n: the integer
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	int nb_bit = 0;
	unsigned long int tmp = n;
	int m;

	if (n == 0)
		_putchar(48);
	else
	{
		while (tmp != 0)
		{
			tmp = tmp >> 1;
			nb_bit++;
		}

		m = 1 << (nb_bit - 1);

		while (m != 0)
		{
			if (n & m)
				_putchar(49);
			else
				_putchar(48);
			m = m >> 1;
		}
	}
}
