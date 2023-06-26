#include "main.h"

/**
 * swap_int - swap two integers
 * @a: The integer
 * @b: The second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
