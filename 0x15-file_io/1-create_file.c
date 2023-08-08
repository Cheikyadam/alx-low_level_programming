#include "main.h"
#include <string.h>

/**
 * create_file - creating a file
 * @filename: the name
 * @text_content: the text
 *
 * Return: an integer
 */

int create_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t n;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_WRONLY | O_CREAT | 0_TRUNC, S_IRUSR | S_IWUSR);
	if (fp == -1)
		return (-1);
	if (text_content != NULL)
	{
		n = write(fp, text_content, strlen(text_content));
		if (n == -1)
			return (-1);
	}
	return (1);
}
