#include "search_algos.h"

/**
 * linear_search - linear search algo
 * @array: searching in this array
 * @size: array size
 * @value: value to be searched
 *
 * Return: Index of value in array
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int *p = array;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, (p[i]));
		if ((p[i]) == value)
			return ((int)(i));
	}
	return (-1);
}
