#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: String_1.
 * @s2: String_2.
 *
 * Return: COncatenation of s1 and s2.
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	s = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

	if (s == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0' && len1)
	{
		s[i] = s1[i];
		i++;
	}

	j = 0;
	while (s2[j] != '\0' && len2)
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	return (s);
}
