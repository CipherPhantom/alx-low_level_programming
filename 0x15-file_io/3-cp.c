#include "main.h"

/**
 * main - Copies the content of a file to another file.
 * @argc: Argument Counter
 * @argv: Argument Vector
 *
 * Return: 0 for success.
 */
int main(int argc, char *argv[])
{
	char *buffer;
	int o_from, o_to, r_from, w_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	
	buffer = malloc(1024 * sizeof(char));
	if (!buffer)
		file_to_error(argv[2], buffer);

	o_from = open(argv[1], O_RDONLY);
	o_to = creat(argv[2], 0664);
	r_from = read(o_from, buffer, 1024);

	do {
		if (o_from == -1 || r_from == -1)
			file_from_error(argv[1], buffer);

		w_to = write(o_to, buffer, 1024);
		if (w_to == -1 || o_to == -1)
			file_to_error(argv[2], buffer);

		r_from = read(o_from, buffer, 1024);
		o_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r_from > 0);

	free(buffer);
	close_fd(o_from);
	close_fd(o_to);
	return (0);
}

/**
 * file_from_error - Prints error message(file_from) and exit 98
 * @s: Name of file.
 * @buf: Buffer
 */
void file_from_error(char *s, char *buf)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
	free(buf);
	exit(98);
}

/**
 * file_to_error - Prints error message(file_to) and exit 99
 * @s: Name of file.
 * @buf: Buffer
 */
void file_to_error(char *s, char *buf)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
	free(buf);
	exit(99);
}

/**
 * close_fd - Closes, prints error message if closing fails file and exit 100
 * @fd: File descriptor
 */
void close_fd(int fd)
{
	int c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
