#include "main.h"

/**
 * print_binary - printing the binary of an int
 * @n: the integer
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned int nb_bit = 0;
	unsigned long int tmp = n;
	unsigned int h_bit = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		while ((tmp) != 0)
		{
			(tmp) >>= 1;
			nb_bit++;
		}

		h_bit  <<= (nb_bit - 1);

		while (h_bit != 0)
		{
			if ((n) & h_bit)
				_putchar('1');
			else
				_putchar('0');
			h_bit  >>= 1;
		}
	}
}
