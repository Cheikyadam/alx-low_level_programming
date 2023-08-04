#include "main.h"

/**
 * clear_bit - clear a bit
 * @n: the number
 * @index: the index
 *
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int m;

	if (n == NULL)
		return (-1);

	m = ~(1 << index);
	*n &= m;
	return (1);
}
