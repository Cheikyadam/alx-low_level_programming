#include "search_algos.h"

/**
 * myprint - print array
 * @array: the array
 * @first: 1st elmt
 * @last: last elmt
 *
 * Return: Nothing
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
 * @begin: first elmnt
 * @size: array size
 * @value: value to be searched in array
 *
 * Return: (-1) if value is not in array, value index otherwise
 */


int binary_helper(int *array, size_t begin, size_t size, int value)
{
	size_t middle = 0;
	size_t first = begin, last = size;

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

/**
 * min - minimum
 * @first: first elmt
 * @second: sec
 *
 * Return: the min
 */

size_t min(size_t first, size_t second)
{
	if (first < second)
		return (first);
	return (second);
}

/**
 * exponential_search - exponential search
 *@array: the array
 * @size: array size
 * @value: value to be searched in array
 *
 * Return: (-1) if value is not in array, value index otherwise
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, my_min;

	while (i < size && value > array[i])
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i = i * 2;
	}
	my_min = min(i, size - 1);
	printf("Value found between indexes [%ld] and [%ld]\n", (i / 2), my_min);
	return (binary_helper(array, (i / 2), my_min, value));
}
