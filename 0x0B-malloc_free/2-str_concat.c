#include "main.h"
#include <stdlib.h>

/**
 * lenght - the lenght of a string
 * @s:the string
 *
 * Return: an integer
 */

int lenght(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * str_concat - concatenation of strings
 * @s1: first string
 * @s2: second string
 *
 * Return: char *
 */

char *str_concat(char *s1, char *s2)
{
	char *new;
	int i;
	int j;

	new = malloc(sizeof(char) * (lenght(s1) + 1 + lenght(s2)));
	if (new != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			new[i] = s1[i];
		for (j = 0; s2[j] != '\0'; j++)
		{
			new[i] = s2[j];
			i++;
		}
	}
	return (new);
}
