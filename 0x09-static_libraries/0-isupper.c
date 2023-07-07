#include "main.h"

/**
 * _isupper - to know if is upper
 * @c: the caracter to check
 *
 * Return: 1 or 0
 */

int _isupper(int c)
{
char r;
for (r = 'A'; r <= 'Z'; r++)
if (r == c)
return (1);

return (0);
}
