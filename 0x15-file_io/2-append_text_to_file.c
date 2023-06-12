#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * standard output.
 * @filename: Name of the file to append.
 * @text_content: NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wrt_result, len;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);

		len = 0;
		while (*(text_content + len) != '\0')
			len++;

		wrt_result = write(fd, text_content, len);
		close(fd);

		if (wrt_result == -1)
			return (-1);
	}

	return (1);
}


