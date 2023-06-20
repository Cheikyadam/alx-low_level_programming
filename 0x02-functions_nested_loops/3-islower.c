#include "main.h"
/**
 *_islower -determine casse
 *@parameterc: an integer
 *
 *section header : including main.h
 *Return: int 0 or 1
 */

int _islower(int c)
{
char p;

for (p = 'a'; p <= 'z'; p++)
{
if (p == c)
return (1);
}
return (0);
}

