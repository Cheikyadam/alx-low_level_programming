#include <stdio.h>

/**
 * main - print file name
 *
 * return: 0
 */

int main(void)
{
	char *s;

	s = __FILE__;
	printf("%s\n", s);
	return (0);
}
