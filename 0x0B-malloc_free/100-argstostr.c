#include "main.h"
#include <stdlib.h>

/**
 * lenght - the lenght of a string
 * @s:the string
 *
 * Return: an integer
 */

int lenght(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i + 1);
}

/**
 * argstostr - concatenation of arguments
 * @ac: number of arguments
 * @av: the arguments
 *
 * Return: char *
 */

char *argstostr(int ac, char **av)
{
	char *new;
	int i;
	int j;
	int k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		k += lenght(av[i]);

	new = malloc(sizeof(char) * k);
	k = 0;
	if (new != NULL)
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j] != '\0'; j++)
			{
				new[k] = av[i][j];
				k++;
			}
			new[k] = '\n';
			k++;
		}
	}
	return (new);
}
