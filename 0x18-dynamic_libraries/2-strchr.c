#include "main.h"

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

	return (s);
}
