#include "main.h"
#include <string.h>

/**
 * binary_to_uint - convert binary to int
 * @b: the binary number
 *
 * Return: the decimal equivalent
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	unsigned int j = 0;
	int i;
	unsigned int p = 1;

	if (b == NULL)
		return (0);
	for (i = strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
		n += p * (b[i] - 48);
		j++;
		p = p * 2;
	}
	return (n);
}
