#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);
/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: Name of file buffer is storing chars for.
 * Return: buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}
/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int d;

	d = close(fd);

	if (d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies contents of a file to another file.
 * @argc: Number of arguments supplied to program.
 * @argv: An array of pointers to arguments.
 *
 * Return: 0 on success.
 *
 * Description: If argument count is wrong - exit code 97.
 * If file_from doesn't exist or cannot be read - exit code 98.
 * If file_to can't be created or written to - exit code 99.
 * If file_to or file_from can't be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, c, b;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	c = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || c == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		b = write(to, buffer, c);
		if (to == -1 || b == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		c = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (c > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
