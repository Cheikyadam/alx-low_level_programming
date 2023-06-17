#include <stdio.h>
/**
 * main - digit
 *
 * Return:Always 0 (Success)
 */

int main(void)
{
int i;
int j;

for (j = 0; j <= 9; j++)
{
for (i = 48; i <= 57; i++)
{
putchar(i);
putchar(',');
}
putchar('\n');
}
putchar('\n');
return (0);
}
