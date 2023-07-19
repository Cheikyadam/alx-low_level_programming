#include "function_pointers.h"

/**
 * array_iterator - do an action to each element of a array
 * @array: the array
 * @size: size of the array
 * @action: the action to do
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	
	if (size > 0)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
