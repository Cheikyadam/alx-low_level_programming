#include "main.h"
/**
 * jack_bauer - determine casse
 *
 * section header : including main.h
 * Return: void  
 */

void jack_bauer(void)
{
int i;
int j;
int l;
int k;
int it=9;
  
for (i = 0; i <= 2; i++)
{
for (j = 0 ; j <= it; j++)
{
for (k = 0;k <= 5; k++)
{
for (l = 0;l <= 9; l++)
{
_putchar(48 + i);
_putchar(48 + j);
_putchar(':');
_putchar(48 + k);
_putchar(48 + l);
_putchar('\n');
if (i == 1 && j == 9 && k == 5 && l== 9)
it = 3;
}
}
}
}
 
}
