#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: text file to be read
 * @letters: numbers count of the text in the file
 *
 * Return: returns 0 if NULL or number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t bytes_read, bytes_written;
	char *buff;

	file_descriptor = open(filename, O_RDONLY);
	buff = malloc(sizeof(char) * (letters));

	if (!filename || file_descriptor == -1 || !buff)
	{
		close(file_descriptor);
		free(buff);
		return (0);
	}


	bytes_read = read(file_descriptor, buff, letters);
	bytes_written = write(STDOUT_FILENO, buff, bytes_read);

	close(file_descriptor);
	free(buff);

	return (bytes_written);
}
