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
		fprintf(stderr, "Usage: cp file_from file_to\n");
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
	}
	while (fp1_from);

	fp2_from = close(fp_from);
	if (fp2_from == -1)
		close_error(fp_from);

	fp2_to = close(fp_to);
	if (fp2_to == -1)
		close_error(fp_to);
	return (0);
}

/**
 * file_from_error - Prints error message(file_from) and exit 98
 * @s: Name of file.
 */
void file_from_error(char *s)
{
	fprintf(stderr, "Error: Can't read from file %s\n", s);
	exit(98);
}

/**
 * file_to_error - Prints error message(file_to) and exit 99
 * @s: Name of file.
 */
void file_to_error(char *s)
{
	fprintf(stderr, "Error: Can't write to %s\n", s);
	exit(99);
}

/**
 * close_error - Prints error message when closing file and exit 100
 * @n: File descriptor
 */
void close_error(int n)
{
	fprintf(stderr, "Error: Can't close fd %d\n", n);
	exit(100);
}
