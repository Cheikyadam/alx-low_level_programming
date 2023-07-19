#include <stdio.h>
#include <stdlib.h>

/**
 * main - print opcodes
 * @argc: the number of arguments
 * @argv: arguments
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) <= 0)
	{
		printf("Error\n");
		exit(2);
	}

	/* my code to print the opcodes here*/

	return (0);
}
