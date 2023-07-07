#include "main.h"

/**
 * _strncat - concatenation
 * @src: source
 * @dest: destination
 * @n : the number of bytes
 *
 * Return: char *
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; (j < n) && (src[j] != '\0'); j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
