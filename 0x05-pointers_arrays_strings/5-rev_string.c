#include "main.h"

/**
 * rev_string - string rev
 * @s: The string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int j;
	int it;
	char c[1];

	for (i = 0; s[i] != '\0'; i++)
		;
	i--;
	it = (i / 2);
	for (j = 0; j != it; j++)
	{
		c[0] = s[j];
		s[j] = s[i];
		s[i] = c[0];
		i--;
	}
}
