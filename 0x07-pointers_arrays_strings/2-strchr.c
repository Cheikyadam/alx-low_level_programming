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
	while ((*s != '\0') && (*s != c))
		s++;

	if (*s == '\0')
		return (NULL);

	return (s);
}
