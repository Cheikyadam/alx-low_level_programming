#include "main.h"
#include <stdlib.h>

/**
 * letters_f - number of bytes of a file
 * @file: the file
 *
 * Return: the number of bytes
 */

size_t letters_f(const char *file)
{
	size_t i = 0;
	FILE *fp;

	fp = fopen(file, "r");
	while (fgetc(fp) != EOF)
		i++;
	fclose(fp);
	return (i);
}
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
	size_t let_r, buf = letters;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	let_r = letters_f(filename);
	if (letters > let_r)
		buf = let_r;

	buffer = malloc(buf);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	n = read(fd, buffer, buf);
	if (n == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	n = write(STDOUT_FILENO, buffer, buf);
	if (n == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (n);
}
