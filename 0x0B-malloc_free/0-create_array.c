#include "main.h"
#include <stdlib.h>

/**
 * create_array - creating an array
 * @size : the size of the array
 * @c : the array will be filled with this char
 *
 * Return : null or the array
 */

char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	t = malloc(sizeof(char) * size);
	if (t != NULL)
	{
		for (i = 0; i < size; i++)
			t[i] = c;
	}
	return (t);
}
