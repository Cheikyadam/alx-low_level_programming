#define BUFFER_SIZE 1024
#include "main.h"
#include <stdlib.h>

/**
 * exit_f - to exit
 * @s: the message
 * @n: the exit code
 * @f: the filename
 *
 * Return: Nothing
 */

void exit_f(char *s, char *f, int n)
{
	dprintf(2, "%s%s\n", s, f);
	exit(n);
}

/**
 * main - cp
 * @argc: number of argument
 * @argv: arguments
 *
 * Return: Always 0 if no error
 */
int main(int argc, char **argv)
{
	char buffer[BUFFER_SIZE];
	int to, from;
	ssize_t n, n2;

	if (argc != 3)
		exit_f("Usage: cp file_from file_to", " ", 97);
	from = open(argv[1], O_RDONLY);
	if (from == -1)
		exit_f("Error: Can't read from file ", argv[1], 98);
	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (to == -1)
		exit_f("Error: Can't write to ", argv[2], 99);
	while ((n = read(from, buffer, BUFFER_SIZE)) > 0)
	{
		n2 = write(to, buffer, n);
		if (n2 == -1)
			exit_f("Error: Can't write to ", argv[2], 99);
	}
	if (n == -1)
		exit_f("Error: Can't read from file ", argv[1], 98);
	if (close(to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", to);
		exit(100);
	}
	if (close(from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	return (0);
}
