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

	if (n == 0)
		_putchar('0');
	else
	{
		while ((tmp) != 0)
		{
			(tmp) >>= 1;
			nb_bit++;
		}

		nb_bit--;
		while (nb_bit >= 0)
		{
			if (((n) >> nb_bit) & 1)
				_putchar('1');
			else
				_putchar('0');

			nb_bit--;
		}
	}
}
