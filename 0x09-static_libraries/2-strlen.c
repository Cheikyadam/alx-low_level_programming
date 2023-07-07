#include "main.h"

/**
 * _strlen - len of s
 * @s: The string
 *
 * Return: an integer
 */
int  _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
