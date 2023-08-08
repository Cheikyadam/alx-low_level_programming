#include "main.h"

/**
 * read_textfile - reading a text file
 * @filename: the name of the file
 * @letters: the numbers of letters
 *
 * Return: the size
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fd;
	ssize_t n;

	if (filename == NULL)
		return (0);

	fd = fopen(filename, "r");
	if (fd == NULL)
		return (0);
	n = write(1, fd, letters);
	fclose(fd);
	if (n == -1)
		return (0);
	return (n);
}
