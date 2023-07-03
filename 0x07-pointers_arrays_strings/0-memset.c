#include "main.h"

/**
 * _memset -setting memory
 * @s: the pointer
 * @b: the constant
 * @n: the number of bytes
 *
 * Return: char *
 */

char *_memset(char *s, char b, unsigned int n)
{
        char *p = s;
	unsigned int i = 0;
	
	while (i < n)
	{
		*p = b;
		p++;
		i++;
	}

       	return (s);
}
