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
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buffer);
		exit(99);
	}
	o_from = open(argv[1], O_RDONLY);
	o_to = creat(argv[2], 0664);
	r_from = read(o_from, buffer, 1024);
	do {
		if (o_from == -1 || r_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w_to = write(o_to, buffer, r_from);
		if (w_to == -1 || o_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r_from = read(o_from, buffer, 1024);
		o_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r_from > 0);
	free(buffer);
	close_fd(o_from);
	close_fd(o_to);
	return (0);
}
/**
 * close_fd - Close a file
 * @fd: file descriptor
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
