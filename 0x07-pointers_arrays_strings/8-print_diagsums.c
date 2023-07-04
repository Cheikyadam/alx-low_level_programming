#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sums of diagonals
 * @a: the array
 * @size: the size
 *
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i = 0;
	int t = size * size;

	while (i < t)
	{
		sum1 += a[i];
		i += size + 1;
	}

	i = size - 1;
	while (i < (t - 1))
	{
		sum2 += a[i];
		i += size - 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
