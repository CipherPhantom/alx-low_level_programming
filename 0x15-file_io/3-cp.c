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
	char *file_from, *file_to, str[1024] = {0};
	int fp_from, fp_to, fp1_from, fp1_to, fp2_from, fp2_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	fp_from = open(file_from, O_RDONLY);
	if (fp_from == -1)
		file_from_error(file_from);

	fp_to = creat(file_to, 0664);
	if (fp_to == -1)
		file_to_error(file_to);
	do {
		fp1_from = read(fp_from, str, 1024);
		if (fp1_from == -1)
			file_from_error(file_from);

		fp1_to = write(fp_to, str, 1024);
		if (fp1_to == -1)
			file_to_error(file_to);
	} while (fp1_from > 0);

	close_fd(fp_from);
	close_fd(fp_to);
	return (0);
}

/**
 * file_from_error - Prints error message(file_from) and exit 98
 * @s: Name of file.
 */
void file_from_error(char *s)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
	exit(98);
}

/**
 * file_to_error - Prints error message(file_to) and exit 99
 * @s: Name of file.
 */
void file_to_error(char *s)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
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
