#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: String to be printed between numbers.
 * @n: Number of integers.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int x;
	unsigned int i;
	va_list args;

	if (n == 0)
		return;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);
		if (separator != NULL && (i + 1) < n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
