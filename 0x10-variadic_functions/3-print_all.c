#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - printing all
 * @format: the format
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	int j = 0;

	if (format != NULL)
	{
		while (format[j] != '\0')
		{
			j++;
		}
		va_start(ap, format);
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(ap, int));
					break;
				case 'i':
					printf("%d", va_arg(ap, int));
					break;
				case 'f':
					printf("%f", va_arg(ap, double));
					break;
				case 's':
					printf("%s", va_arg(ap, char *));
					break;
				default:
					break;
			}
			if (i < (j - 1) && (format[i] == 'c' || format[i] == 'i'
			|| format[i] == 'f' || format[i] == 's'))
			{
				printf(", ");
			}
			i++;
		}
		va_end(ap);
	}
	printf("\n");
}
