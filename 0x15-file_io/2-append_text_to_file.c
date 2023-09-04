#include "main.h"

/**
 * _strlen - Computes string length.
 * @str: String to be calculated.
 * Return: u
 */

unsigned int _strlen(const char *str)
{
	unsigned int u = 0;

	while (str[u] != '\0')
		u++;
	return (u);
}

/**
 * append_text_to_file - Appends text at end of file.
 * @filename: Filename to appended.
 * @text_content: Content to appended.
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n_written;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	n_written = write(fd, text_content, _strlen(text_content));
	if (n_written == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
