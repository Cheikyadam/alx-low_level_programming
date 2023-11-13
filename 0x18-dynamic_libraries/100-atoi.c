#include "main.h"
#include <stddef.h>

/**
 * _atoi - string numbers
 * @s: The string
 *
 * Return: an integer
 */

int _atoi(char *s)
{
	int i;
	int j;
	int nb = 0;
	int cpt = 0;

	if (s != NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			if (s[i] == '-')
				cpt++;
			if (s[i] >= 48 && s[i] <= 57)
			{
				j = i;
				while (s[j] >= 48 && s[j] <= 57)
				{
					nb = nb * 10;
					nb = nb + (s[j] - 48);
					j++;
				}
				break;
			}
		}
		if ((cpt % 2) != 0)
			nb = -nb;
	}
	return (nb);
}
