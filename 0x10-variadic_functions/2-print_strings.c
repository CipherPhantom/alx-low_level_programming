#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: String to be printed between the strings
 * @n: Number of strings.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator != NULL && (i + 1) < n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
