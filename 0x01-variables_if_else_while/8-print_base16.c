#include <stdio.h>
/**
 * main - digit
 *
 * Return:Always 0 (Success)
 */

int main(void)
{
int i;

for (i = 48; i <= 57; i++)
{
putchar(i);
}
for (i = 'a'; i <= 'f'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
