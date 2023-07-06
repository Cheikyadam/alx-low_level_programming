#include "main.h"

/**
 * helper - my subfunction
 * @n : n is prime or not
 * @i : used to search a divisor
 *
 * Return: an int
 */

int helper(int i, int n)
{
	if (n % i == 0)
		return (0);
	if (i > (n / 2))
		return (1);
	return (helper((i + 1), n));
}

/**
 * is_prime_number - prime
 * @n : n is prime or not
 *
 * Return: an int
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n == 2)
		return (1);
	if (n <= 1)
		return (0);
	return (helper(i, n));
}
