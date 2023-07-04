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
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += a[i][j];
		}
	}

	for (i = size - 1; i >= 0; i--)
		for (j = 0; j < size; j++)
			if (i == j)
				sum2 += a[i][j];
	printf("%d, %d\n", sum1, sum2);
}
