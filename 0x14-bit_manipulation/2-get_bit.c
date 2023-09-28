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
	if (n == 0)
	{
		if (index == 0)
			return (0);
		return (-1);
	}

	if (index > 64)
		return (-1);

	if ((n >> index) & 1)
		return (1);
	else
		return (0);
}
