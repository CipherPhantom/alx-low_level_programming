#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: Name
 * @f: Pointer to the function that modifies name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
