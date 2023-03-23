#include "variadic_functions.h"

void print_char(va_list args)
{
    printf("%c", va_arg(args, int));
}
void print_int(va_list args)
{
    printf("%d", va_arg(args, int));
}
void print_float(va_list args)
{
    printf("%f", va_arg(args, double));
}
void print_string(va_list args)
{
    printf("%s", va_arg(args, char *));
}

/**
 * print_all - Prints anything.
 * @format: list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
    void (*func[4])(va_list args) = {
        print_char, print_int, print_float, print_string};
    char *form = "cifs";
    int i, j;
   va_list args;
   
   va_start(args, format);
   i = 0;
   while(format[i] != '\0')
   {
       j = 0;
       while (form[j] != '\0')
       {
           if (format[i] == form[j])
            func[j](args);
          j++; 
       }
       i++;
   }
}

