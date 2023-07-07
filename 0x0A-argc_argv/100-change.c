#include <stdio.h>
#include <stdlib.h>

/**
 * main - change
 * @argc: the number of arguments
 * @argv:  the arguments
 *
 * Return: Always (0) or (1)
 */

int main(int argc, char **argv)
{
	int nb;
	int cpt;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	nb = atoi(argv[1]);

	if (nb >= 25)
	{
		cpt = nb / 25;
		nb = nb % 25;
	}
	if (nb >= 10)
	{
		cpt += nb / 10;
		nb = nb % 10;
	}
	if (nb >= 5)
	{
		cpt += nb / 5;
		nb = nb % 5;
	}
	if (nb >= 2)
	{
		cpt += nb / 2;
		nb = nb % 2;
	}
	if (nb >= 1)
	{
		cpt += nb;
	}
	printf("%d\n", cpt);
	return (0);
}
