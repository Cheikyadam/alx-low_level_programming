#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplication of a string
 * @str: The string
 *
 * Return: char *
 */

char *_strdup(char *str)
{
	int i;
	char *new;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	new = malloc(sizeof(char) * i);
	for (i = 0; str[i] != '\0'; i++)
		new[i] = str[i];
	return (new);
}
