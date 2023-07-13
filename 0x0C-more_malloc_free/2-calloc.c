#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocation with calloc
 * @nmemb: the array
 * @size: the size
 *
 * Return: void *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (size == 0 || nmemb == 0)
		return (NULL);
	if (calloc(nmemb, size) == NULL)
		return (NULL);
	return (calloc(nmemb, size));
}
