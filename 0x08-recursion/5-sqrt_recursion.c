#include "main.h"

/**
 * helper - to help
 * @n : sqrt of n
 * @x : the potential square
 *
 * Return: an int
 */

int helper(int n, int x)
{
	if ((x * x) == n)
		return (x);
	if ((x * x) > n)
		return (-1);
	return (helper(n, (x + 1)));
}

/**
 * _sqrt_recursion - sqrt
 * @n : sqrt of n
 *
 * Return: an int
 */

int _sqrt_recursion(int n)
{
	int x = 0;

	if (n < 0)
		return (-1);

	return (helper(n, x));
}
