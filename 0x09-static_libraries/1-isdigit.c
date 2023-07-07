#include "main.h"

/**
 * _isdigit - to know if is upper
 * @c: the caracter to check
 *
 * Return: 1 or 0
 */

int _isdigit(int c)
{
char r;
for (r = 48; r <= 57; r++)
if (r == c)
return (1);

return (0);
}
