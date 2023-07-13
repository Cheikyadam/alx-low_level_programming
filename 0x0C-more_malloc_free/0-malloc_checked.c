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
	void *a;
	
	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
