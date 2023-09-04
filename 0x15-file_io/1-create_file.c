#include "main.h"

/**
 * _strlen - computes string length.
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
 * create_file - Creates file.
 * @filename: File name of file to create.
 * @text_content: Contents within file.
 * Return: 1 on success and -1 on fail.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, n_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		n_written = write(fd, text_content, _strlen(text_content));
		if (n_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
