#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0
 */

int main(void)
{
long int a = 1;
long int b = 2;
int cpt = 2;
long int c;

printf("1, ");
printf("2, ");
while (cpt != 99)
{
c = a + b;
printf("%ld", c);
a = b;
b = c;
if (cpt != 98)
printf(", ");
cpt++;
}
printf("\n");
return (0);
}
