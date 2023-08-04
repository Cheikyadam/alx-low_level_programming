#include "main.h"

/**
 * set_bit - set a bit
 * @n: the number
 * @index: the index
 *
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int m;

	if (n == NULL)
		return (-1);

	m = 1 << index;
	*n |= m;
	return (1);
}
