#include "main.h"

int comp_close(int);

/**
 * main - Main function to copy files
 * @argc: The number of passed arguments
 * @argv: The pointers to array arguments
 * Return: 1 on success, exits on failure
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	int bytes_read = 0, is_eof = 1, src_fd = -1, dest_fd = -1, error = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	src_fd = open(argv[1], O_RDONLY);
	if (src_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	dest_fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (dest_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		comp_close(src_fd);
		exit(99);
	}

	while (is_eof)
	{
		is_eof = read(src_fd, buffer, 1024);
		if (is_eof < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			comp_close(src_fd);
			comp_close(dest_fd);
			exit(98);
		}
		else if (is_eof == 0)
			break;
		bytes_read += is_eof;
		error = write(dest_fd, buffer, is_eof);
		if (error < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			comp_close(src_fd);
			comp_close(dest_fd);
			exit(99);
		}
	}

	error = comp_close(dest_fd);
	if (error < 0)
	{
		comp_close(src_fd);
		exit(100);
	}

	error = comp_close(src_fd);
	if (error < 0)
		exit(100);

	return (0);
}

/**
 * comp_close - A function that closes a file and prints error when closed file
 * @description: Description error for closed file
 * Return: 1 on success, -1 on failure
 */
int comp_close(int description)
{
	int error;

	error = close(description);
	if (error < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", description);

	return (error);
}

