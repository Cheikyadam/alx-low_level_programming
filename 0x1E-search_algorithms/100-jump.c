#include <math.h>
#include "search_algos.h"

/**
 * linear_helper - linear search algo
 * @array: searching in this array
 * @low: first index
 * @high: last index
 * @value: value to be searched
 *
 * Return: Index of value in array
 */

int linear_helper(int *array, size_t low, size_t high, int value)
{
	size_t i = 0;
	int *p = array;

	if (array == NULL)
		return (-1);
	for (i = low; i <= high; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, (p[i]));
		if ((p[i]) == value)
			return ((int)(i));
	}
	return (-1);
}

/**
 * jump_search - jump search
 * @array: the array
 * @size: array size
 * @value: researched value
 *
 * Return: value index or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t low = 0, high, jump;

	if (array == NULL)
		return (-1);
	jump = (size_t)(sqrt(size));
	high = jump;
	while (high < size)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		if (array[high] < value)
		{
			low = high;
			high += jump;
		}
		else
		{
			if (array[low] == value)
				return (low);
			printf("Value found between indexes [%ld] and [%ld]\n", low, high);
			return (linear_helper(array, low, high, value));
		}
	}
	printf("Value checked array[%ld] = [%d]\n", low, array[low]);
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);
	return (linear_helper(array, low, (size - 1), value));
}
