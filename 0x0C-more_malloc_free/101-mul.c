#include "main.h"
#include <stdlib.h>

/**
 * print_er - printing error
 *
 * Return: void
 */
void print_er(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
}
/**
 * _atoi - string numbers
 * @s: The string
 *
 * Return: an integer
 */
unsigned int _atoi(char *s)
{
	unsigned int i;
	unsigned int nb = 0;

	for (i = 0 ; s[i] != '\0'; i++)
		nb = (nb * 10) + (s[i] - 48);
	return (nb);
}

/**
 * print_number - printing
 * @n: the number to be print
 *
 * Return: void
 */

void print_number(unsigned int n)
{
	unsigned int i;
	unsigned int cpt = 0;
	unsigned int mul = 10;


	while (n % mul != n)
	{
		mul = mul * 10;
		cpt++;
	}
	mul = mul / 10;

	for (i = 1; i <= cpt; i++)
	{
		_putchar(48 + ((n - (n % mul)) / mul));
		n = n % mul;
		mul = mul / 10;
	}
	_putchar(48 + n);
}

/**
 * main - multipliply
 * @argc: the number of arguments
 * @argv: the arguments
 *
 * Return: Always (0)
 */

int main(int argc, char **argv)
{
	unsigned int num1;
	unsigned int num2;
	unsigned int i;
	unsigned int p;

	if (argc != 3)
	{
		print_er();
		exit(98);
	}
	for (i = 0; argv[1][i] != '\0'; i++)
		if (argv[1][i] < 48 || argv[1][i] > 57)
		{
			print_er();
			exit(98);
		}
	for (i = 0; argv[2][i] != '\0'; i++)
		if (argv[2][i] < 48 || argv[2][i] > 57)
		{
			print_er();
			exit(98);
		}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	p = num1 * num2;
	print_number(p);
	_putchar('\n');
	return (0);
}

