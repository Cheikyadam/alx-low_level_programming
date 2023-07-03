#include "main.h"

/**
 * _strspn - lengh of a a substring
 * @s: the string
 * @accept: the substring
 *
 * Return: an int
 */

unsigned int _strspn(char *s, char *accept)
{
	int n = 0;
	char *p = accept;
	int i;

	while (*p != '\0')
	{	
		for (i = 0; s[i] != ',' && s[i] != ';' && s[i] != '!' && s[i] != '?' && s[i] != '.'; i++)
		{
			if (s[i] == *p)
				n++;
		}
		p++;
	}
	return (n);
}
