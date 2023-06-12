#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: number of letters to read and print.
 * Return: actual number of letters read and printed.
 * If the file cannot be opened or read, return 0.
 * If filename is NULL, return 0.
 * If write fails or does not write the expected amount of bytes, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedesc;
	ssize_t bytes_read, bytes_written;
	char *buff;

	if (filename == NULL)
		return (0);

	filedesc = open(filename, O_RDONLY);
	if (filedesc == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(filedesc);
		return (0);
	}

	bytes_read = read(filedesc, buff, letters);
	if (bytes_read == -1)
	{
		free(buff);
		close(filedesc);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buff, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buff);
		close(filedesc);
		return (0);
	}

	free(buff);
	close(filedesc);

	return (bytes_written);
}

