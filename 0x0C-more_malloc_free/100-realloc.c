#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - realloc
 * @ptr: the pointer
 * @old_size: old size
 * @new_size: the new size
 *
 * Return: void *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *a = NULL;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		a = malloc(new_size);
		return (a);
	}
	if (ptr != 0 && new_size == 0)
	{
		free(ptr);
		return (a);
	}
	if (new_size > old_size)
	{
		a = malloc(new_size);
		if (a != NULL)
		{
			memcpy(a, ptr, old_size);
			free(ptr);
		}
	}
	return (a);
}
