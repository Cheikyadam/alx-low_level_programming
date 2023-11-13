#include "main.h"

/**
 * _strcmp - concatenation
 * @s1: first string
 * @s2: 2nd string
 *
 * Return: an integer
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1) == (*s2) && (*s1) != '\0')
	{
		s1++;
		s2++;
	}
	if ((*s1) == '\0')
		s1--;
	if ((*s2) == '\0')
		s2--;

	return ((*s1) - (*s2));
}
