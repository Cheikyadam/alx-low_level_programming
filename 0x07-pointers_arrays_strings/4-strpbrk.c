#include "main.h"

/**
 * _strpbrk  - searching a byte
 * @s: the string
 * @accept: the substring
 *
 * Return: char * 
 */

char *_strpbrk(char *s, char *accept)
{
        char *p;
	char *q;
	
	for (p = s; *p != '\0'; p++)
	{
	for (q = accept ; *q != '\0'; q++)
		if (*q == *p)
			return (p);
	}
	return (p);
}
