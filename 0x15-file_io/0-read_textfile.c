#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reading a text file
 * @filename: the name of the file
 * @letters: the numbers of letters
 *
 * Return: the size
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);
	n = read(fd, buffer, letters);
	if (n == -1)
		return (0);
	n = write(1, buffer, letters);
	if (n == -1)
		return (0);
	close(fd);
	return (n);
}
