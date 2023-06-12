#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: The filename to create
 * @text_content: A NULL terminated string to write to the file
 * Return: 1 on success, -1 if file can not be created, nor written,
 * nor write fails.
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc, bytes_written, text_len = 0;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file_desc < 0)
		return (-1);

	while (text_content && *(text_content + text_len))
		text_len++;

	bytes_written = write(file_desc, text_content, text_len);
	close(file_desc);
	if (bytes_written < 0)
		return (-1);
	return (1);

}

