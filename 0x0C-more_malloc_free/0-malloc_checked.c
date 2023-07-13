#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a program using malloc
 * @b: the size
 *
 * Return: int *
 */

void *malloc_checked(unsigned int b)
{
	if (malloc(b) == NULL)
		exit(98);
	else
		return (malloc(b));
}
