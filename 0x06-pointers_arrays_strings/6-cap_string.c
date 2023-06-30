#include "main.h"

/**
 * cap_string - capitalize word
 * @src: source
 *
 * Return: char *
 */

char *cap_string(char *src)
{
	int i = 0;

	if (src[i] >= 'a' && src[i] <= 'z')
		src[i] = src[i] - 32;
	for (i = 0; src[i] != '\0'; i++)
	{
		if (src[i] == ' ' || src[i] == '\t' || src[i] == '\n' ||
		src[i] == ',' || src[i] == ';' || src[i] == '.'
		|| src[i] == '!' || src[i] == '?' ||  src[i] == '"'
		|| src[i] == '(' || src[i] == ')' || src[i] ==
		'{' || src[i] == '}')
		{
			if (src[i + 1] >= 'a' && src[i + 1] <= 'z')
				src[i + 1] = src[i + 1] - 32;
		}
	}
	return (src);
}
