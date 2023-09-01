#include "main.h"

/**
 * set_bit - set a bit
 * @n: the number
 * @index: the index
 *
 * Return:the bit
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (n == NULL)
		return (-1);
	if (index > 64)
		return (-1);
	(*n) |= (1 << index);
	return (1);
}
