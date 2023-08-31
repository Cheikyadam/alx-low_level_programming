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
	int h_bit;

	if (n == 0)
		_putchar(48);
	else
	{
		while ((tmp) != 0)
		{
			(tmp) >>= 1;
			nb_bit++;
		}

		h_bit = 1 << (nb_bit - 1);

		while (h_bit != 0)
		{
			if ((n) & h_bit)
				_putchar(49);
			else
				_putchar(48);
			h_bit  >>= 1;
		}
	}
}
