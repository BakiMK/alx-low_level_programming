#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to standard output.
 * @filename: File name as a char.
 * @letters: Num of letters to read and print.
 * Return: Num of letters that  could be read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int num_read, num_written;
	char *ch;

	if (filename == NULL)
		return (0);
	ch = malloc(letters + 1);
	fd = open(filename, O_RDONLY);
	if (fd < 0 || ch == NULL)
		return (0);
	num_read = read(fd, ch, letters);
	if (num_read < 0)
	{
		close(fd);
		return (0);
	}
	ch[num_read] = '\0';
	num_written = write(STDOUT_FILENO, ch, num_read);

	free(ch);
	close(fd);

	if (num_read != num_written)
		return (0);
	return (num_read);
}
