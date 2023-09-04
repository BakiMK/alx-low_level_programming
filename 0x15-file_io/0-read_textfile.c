#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text print STDOUT.
 * @filename: The text file being read.
 * @letters: The number of letters to read.
 * Return: b
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t b;
	ssize_t j;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	j = read(fd, buf, letters);
	b = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (b);
}
