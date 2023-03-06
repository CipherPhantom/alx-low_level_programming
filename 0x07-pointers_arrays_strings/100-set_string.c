#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: pointer of pointer
 * @to: string pointer
 */
void set_string(char **s, char *to)
{
	*s = to;
}
