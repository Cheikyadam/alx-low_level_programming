#include "3-calc.h"

/**
 * get_op_func - select op
 * @s: the operation
 *
 * Return: an integer
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	if (s != NULL)
	{
		i = 0;
		while ((i <= 4) && (*ops[i].op != *s))
			i++;
		if ((i <= 4) && (*ops[i].op) == *s)
			return (ops[i].f);
	}
	return (NULL);
}
