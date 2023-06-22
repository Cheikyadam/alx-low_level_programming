#include <stdio.h>
#include <gmp.h>
/**
 * main - check the code
 *
 * Return: Always 0
 */

int main(void)
{
long a = 1;
long b = 2;
long int sum = 2;
long int c;

while (c < 4000000)
{
c = a + b;
if ((c % 2) == 0)
sum += c;
a = b;
b = c;
}
printf("%ld\n", sum);
return (0);
}
