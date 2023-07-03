#include "main.h"

/**
 * _memcpy - copying memory
 * @dest: the pointer destination
 * @src: the source
 * @n: the number of bytes
 *
 * Return: char *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;
	unsigned int i = 0;

	while (i <  n)
	{
		p = src;
		src++;
		p++;
		i++;
	}
	return (dest);
}
