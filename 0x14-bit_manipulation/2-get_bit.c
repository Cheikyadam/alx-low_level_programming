#include "main.h"

/**
 * get_bit - get a bit
 * @n: the number
 * @index: the index
 *
 * Return:the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int tmp = n;
	unsigned int nb_bit = 0;
	unsigned int m;

	if (n == 0)
	{
		if (index == 0)
			return (0);
		return (-1);
	}
	while (tmp != 0)
	{
		tmp >>= 1;
		nb_bit++;
	}
	nb_bit--;

	if (index > nb_bit)
		return (-1);

	m = 1 << (nb_bit);

	while (nb_bit != index)
	{
		nb_bit--;
		m >>= 1;
	}

	if (n & m)
		return (1);
	else
		return (0);
}
