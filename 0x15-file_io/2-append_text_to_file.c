#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file to append to
 * @text_content: text to be appended
 * Return: 1 or -1 on success or failure respectively
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int length;
	int write_bytes;

	if (filename == NULL)
	{
		return (-1);
	}


	file_descriptor = open(filename, O_WRONLY | O_APPEND);

	if (file_descriptor == -1)
		return (-1);

	if (text_content)
	{
		for (length = 0; text_content[length]; length++)
			;

		write_bytes = write(file_descriptor, text_content, length);

		if (write_bytes == -1)
			return (-1);
	}

	close(file_descriptor);

	return (1);
}
