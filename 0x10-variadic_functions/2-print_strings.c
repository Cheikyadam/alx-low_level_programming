#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - printing strings
 * @n: number of arguments
 * @separator: the separator
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *s;

	if (n > 0)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			s = va_arg(ap, char*);
			if (s != NULL)
			{
				printf("%s", s);
			}
			else
			{
				printf("(nil)");
			}
			if (separator != NULL && i != (n - 1))
			{
				printf("%s", separator);
			}
		}
		va_end(ap);
	}
	printf("\n");
}
