#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
long int i;
long int it;
long int it2;
long int j;
long int prime;

it = 612852475143 / 2;
for (i = 2; i <= it; i++)
{
if ((612852475143 % i) == 0)
{
it2 = i / 2;
j = 2;
while (j <= it2 && (i % j) != 0)
j++;
if (j > it2)
prime = i;
}
}
printf("%ld", prime);
printf("\n");
return (0);
}
