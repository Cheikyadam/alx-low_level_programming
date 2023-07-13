#include "main.h"
#include <stdlib.h>

/**
 * array_range - ranging array
 * @min:the first value
 * @max:the last value
 *
 * Return: int *
 */

int *array_range(int min, int max)
{
	int i;
	int *a = NULL;
	int size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	a = malloc(size * (sizeof(int)));
	if (a != NULL)
	{
		for (i = 0; i < size; i++)
		{
			a[i] = min;
			min++;
		}
	}
	return (a);
}
