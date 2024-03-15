#include "search_algos.h"

/**
 * myprint - print array
 * @array: the array
 * @first: 1st elmt
 * @last: last elmt
 *
 * Return: Nothin
 */

void myprint(int *array, size_t first, size_t last)
{
	size_t i;

	printf("Searching in array: ");
	for (i = first; i < last; i++)
		printf("%d, ", array[i]);

	printf("%d\n", array[i]);
}

/**
 * binary_helper - binary_search algorithm
 * @array: the array
 * @begin: first
 * @size: array size
 * @value: value to be searched in array
 *
 * Return: (-1) if value is not in array, value index otherwise
 */


int binary_helper(int *array, size_t begin, size_t size, int value)
{
	size_t middle;

	middle = (begin + size) / 2;
	if (middle != size - 1)
	{
		myprint(array, begin, size);
		if (array[middle] == value)
			return (middle);
		if (value < array[middle])
			size = middle - 1;
		else
			begin = middle + 1;
		return (binary_helper(array, begin, size, value));
	}
	return (-1);
}

/**
 * advanced_binary - binary_search algorithm
 * @array: the array
 * @size: array size
 * @value: value to be searched in array
 *
 * Return: (-1) if value is not in array, value index otherwise
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binary_helper(array, 0, size - 1, value));
}
