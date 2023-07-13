#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenation
 * @s1: first string
 * @s2: 2nd string
 * @n: number of bytes of s2
 *
 * Return: char *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *new = NULL;
	unsigned int j = 0;

	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
		j = i;
	}

	if (s2 != NULL)
	{
		for (i = 0; i < n && s2[i] != '\0'; i++)
			;
		j += i;
	}
	if (j != 0)
	{
		new = malloc(j + 1);
		if (new == NULL)
			return (NULL);
		i = 0;
		if (s1 != NULL)
		{
			for ( ; s1[i] != '\0'; i++)
			{
				new[i] = s1[i];
			}
		}
		if (s2 != NULL)
		{
			for (j = 0; j < n && s2[j] != '\0'; j++)
			{
				new[i] = s2[j];
				i++;
			}
		}
	}
	return (new);
}
