#include "main.h"
/**
 * _isalpha - determine if alpha or no
 * @c: the caracter to be checked
 *
 * section header : including main.h
 * Return: 0 or 1
 */

int _isalpha(int c)
{
char p;

for (p = 'a'; p <= 'z'; p++)
{
if (p == c)
return (1);
}
for (p = 'A'; p <= 'Z'; p++)
{
if (p == c)
return (1);
}
return (0);
}

