#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - simple operations
 * @argc: the number of arguments
 * @argv: the arguments
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int a;
	int b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((get_op_func(argv[2]) == op_div ||
	get_op_func(argv[2]) == op_mod) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(a, b));
	return (0);
}
