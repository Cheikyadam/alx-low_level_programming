#include "main.h"

/**
 * get_endianness - endian big or little
 *
 * Return: 1 or 0
 */

int get_endianness(void)
{
	unsigned int n = 1;
	char *p = (char*)&n;

	if (*p == 1)
		return (1);
	return (0);
}
