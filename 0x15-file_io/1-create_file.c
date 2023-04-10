#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: name of the file to be create
 * @text_content: String to written to *filename
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int  length, bytes_written, file_descriptor;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);

	if (!text_content)
	{
		close(file_descriptor);
		return (1);
	}

	for (length = 0; text_content[length]; length++)
		;

	bytes_written = write(file_descriptor, text_content, length);
	if (bytes_written == -1)
	{
		close(file_descriptor);
		return (-1);
	}

	close(file_descriptor);
	return (1);
}
