#include "main.h"

/**
 * _strlen - lenght
 * @s: lenght of s
 *
 * Return: an int
 */

int _strlen(const char *s)
{
	int i = 0;

	if (s != NULL)
		for (i = 0; s[i] != '\0'; i++)
			;
	return (i);
}

/**
 * binary_to_uint - convert binary to int
 * @b: the binary number
 *
 * Return: the decimal equivalent
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bin = 0;
	unsigned int j = 0;
	int i;
	unsigned int m = 1;

	if (b == NULL)
		return (0);
	for (i = _strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
		bin += m * (b[i] - 48);
		j++;
		m = m * 2;
	}
	return (bin);
}
