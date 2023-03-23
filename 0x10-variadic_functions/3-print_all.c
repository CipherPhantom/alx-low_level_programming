#include "variadic_functions.h"

/**
 * print_all - Prints anything.
 * @format: list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	int i, t;
	va_list args;
	char c, *str, *sep = "";
	float f;

	va_start(args, format);
	i = 0;
	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'f':
					f = va_arg(args, double);
					printf("%s%f", sep, f);
					break;
				case 'c':
					c = va_arg(args, int);
					printf("%s%c", sep, c);
					break;
				case 'i':
					t = va_arg(args, int);
					printf("%s%d", sep, t);
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
		printf("\n");
		va_end(args);
	}
}

