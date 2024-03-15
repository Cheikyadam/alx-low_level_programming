#include "search_algos.h"

/**
 * interpolation_search - interpolation
 * @array: the array
 * @size: size of array
 * @value: researched
 *
 * Return: value index or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t pos = 0;

	if (array == NULL)
		return (-1);
	pos = low + (((double)(high - low) /
				(array[high] - array[low])) * (value - array[low]));
	while (pos < size)
	{
		pos = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (value < array[pos])
		{
			high = pos - 1;
		}
		else
			low = pos + 1;
	}
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
