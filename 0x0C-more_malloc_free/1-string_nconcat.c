#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: String_1.
 * @s2: String_2.
 * @n: Number of bytes.
 *
 * Return: A pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len, s2_len, i, j, plus = n;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	if (n > s2_len)
		plus = s2_len;
	str = malloc(sizeof(char) * (s1_len + plus + 1));

	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		if (j == s2_len)
			break;
		str[s1_len + j] = s2[j];
	}
	str[s1_len + j] = '\0';
	return (str);
}
