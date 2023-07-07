#include <stdio.h>
/**
 * _atoi - string numbers
 * @s: The string
 *
 * Return: an integer
 */
int _atoi(char *s)
{
	int i;
	int nb = 0;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		if (s[i] < 48 || s[i] > 57)
			return (-1);
		nb = (nb * 10) + (s[i] - 48);
	}
	return (nb);
}
/**
 * main - add arguments
 * @argc: the number of arguments
 * @argv:  the arguments
 *
 * Return: Always (0) or (1)
 */
int main(int argc, char **argv)
{
	int i;
	int sum = 0;
	int nb;

	for (i = 1; i < argc; i++)
	{
		nb = _atoi(argv[i]);
		if (nb == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += nb;
	}
	printf("%d\n", sum);
	return (0);
}
