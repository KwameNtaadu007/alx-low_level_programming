#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can be opened.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - copy contents of one file to another.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: 0 on success, 97-100 on error.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t nread, nwritten;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		return (97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	error_file(file_from, file_to, argv);

	while ((nread = read(file_from, buf, 1024)) > 0)
	{
		nwritten = write(file_to, buf, nread);
		if (nwritten == -1 || nwritten != nread)
		{
			error_file(file_from, file_to, argv);
			break;
		}
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		return (100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error:closing fd %d\n", file_to);
		return (100);
	}

	if (nread == -1)
	{
		dprintf(STDERR_FILENO, "Error:reading from file %s\n", argv[1]);
		return (98);
	}

	return (0);
}
