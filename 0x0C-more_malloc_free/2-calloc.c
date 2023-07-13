#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocation with calloc
 * @nmemb: the array
 * @size: the size
 *
 * Return: void *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;

	if (size == 0 || nmemb == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a != NULL)
	{
		memset(a, 0, size * nmemb);
	}
	return (a);
}
