#include "main.h"

/**
 * _strncpy - concatenation
 * @src: source
 * @dest: destination
 * @n : the number of bytes
 *
 * Return: char *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; (j < n) && (src[j] != '\0'); j++)
		dest[j] = src[j];
	
	for ( ; j < n; j++)
		dest[j] = '\0';	

	return (dest);
}
