#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * _strdup - Allocates string to memory.
 * @str: string
 *
 * Return: FALIURE: NULL, SUCCESS: pointer.
 */
char *_strdup(char *str)
{
	int len, i = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	while (str[i] != '\0' && len)
	{
		s[i] = str[i];
		i++;
	}
	str[i] = '\0';
	return (s);
}
