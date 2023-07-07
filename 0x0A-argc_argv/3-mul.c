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
	int j = 0;
	int nb = 0;

	if (s[0] == '-')
		j++;
	for (i = j ; s[i] != '\0'; i++)
	{
		nb = (nb * 10) + (s[i] - 48);
	}
	if (s[0] == '-')
		nb = -nb;
	return (nb);
}
/**
 * main - multiply the 2 arguments
 * @argc: the number of arguments
 * @argv:  the arguments
 *
 * Return: Always (0) or (1)
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));
	return (0);
}
