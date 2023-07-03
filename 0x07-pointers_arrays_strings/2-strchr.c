#include "main.h"
#include <stddef.h>

/**
 * _strchr -locating a character
 * @s: the string
 * @c: the character
 *
 * Return: char *
 */

char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
		s++;

	if (*s == '\0')
		return (NULL);

	return (s);
}
