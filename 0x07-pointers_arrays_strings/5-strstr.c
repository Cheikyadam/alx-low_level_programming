#include "main.h"
#include <stddef.h>

/**
 * _strstr - searching a substring
 * @haystack: the string
 * @needle: the substring
 *
 * Return: char *
 */

char *_strstr(char *haystack, char *needle)
{
	char *p;
	char *q = needle;
	char *tmp;

	if (needle[0] == '\0')
		return (haystack);
	for (p = haystack; *p != '\0'; p++)
	{
		if (*p == *q)
		{
			tmp = p;
			while (*q == *tmp && *q != '\0')
			{
				q++;
				tmp++;
			}
			if (*q == '\0')
				return (p);
			q = needle;
		}
	}
	return ('\0');
}
