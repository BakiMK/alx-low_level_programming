#include "main.h"

/**
 * append_text_to_file - Appends text at the end of file.
 * @filename: Pointer to name of file.
 * @text_content: String to add to end of file.
 *
 * Return: If function fails or file is NULL -1.
 *         If file doesn't  exist the user lacks write permissions -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int j, b, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	j= open(filename, O_WRONLY | O_APPEND);
	b = write(o, text_content, len);

	if (j == -1 || b == -1)
		return (-1);

	close(b);

	return (1);
}
