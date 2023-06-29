#include "main.h"

/**
 * reverse_array - reversing an array
 * @a: the array
 * @n : the number of integers
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	n--;
	for (i = 0; (i <= (n / 2)); i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}
}
