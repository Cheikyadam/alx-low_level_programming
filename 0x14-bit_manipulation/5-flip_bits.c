#include "main.h"

/**
 * flip_bits - fliping
 * @n: first number
 * @m: 2nd number
 *
 * Return: the difference number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int tmp;
	unsigned int nb_dif = 0;

	if (n == m)
		return (0);

	tmp = n ^ m;
	while (tmp)
	{
		tmp = tmp & (tmp - 1);
		nb_dif++;
	}
	return (nb_dif);
}
