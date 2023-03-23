#include "variadic_functions.h"

/**
 * print_all - Prints anything.
 * @format: list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	int i;
	va_list args;
	char  *str, *sep = "";

	va_start(args, format);
	i = 0;
	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);

}

