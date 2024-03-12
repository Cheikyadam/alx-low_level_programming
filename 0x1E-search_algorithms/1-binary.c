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
 * binary_search - binary_search algorithm
 * @array: the array
 * @size: array size
 * @value: value to be searched in array
 *
 * Return: (-1) if value is not in array, value index otherwise
 */


int binary_search(int *array, size_t size, int value)
{
	size_t middle = 0;
	size_t first = 0, last = size - 1;

	if (array == NULL)
		return (-1);
	while (middle != size - 1)
	{
		myprint(array, first, last);
		middle = ((first + last) / 2);
		if (array[middle] == value)
			return (middle);
		if (value < array[middle])
			last = middle - 1;
		else
			first = middle + 1;
	}
	return (-1);
}
