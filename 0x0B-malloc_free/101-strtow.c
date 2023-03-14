#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * wordCount - Counts the number of words in string.
 * @s: pointer to string.
 *
 * Return: number of words.
 */
int wordCount(char *s)
{
	int i, count = 0;

	for (i = 0; s[i]; i++)
	{
		if ((s[i + 1] == ' ' || s[i + 1] == '\0') && s[i] != ' ')
			count += 1;
	}
	return (count);
}

/**
 * words2D - Initializies 2D array of words.
 * @s: pointer to string.
 *
 * Return: 2D array || pointer to a pointer.
 */
char **words2D(char *s)
{
	int i = 0, len, j = 0;
	int numOfWords = wordCount(s);
	char **words = (char **)malloc(sizeof(char *) * numOfWords + 1);

	while (s[i] != '\0')
	{
		len = 0;
		while (s[i] != ' ')
		{
			len += 1;
			i++;
			if (s[i] == ' ' || s[i] == '\0')
			{
				words[j] = (char *)malloc(sizeof(char) * len);
				j++;
			}
		}
		i++;
	}
	return (words);
}

/**
 * strtow - splits a string into words.
 * @str: Pointer to string.
 *
 * Return: SUCCESS: pointer, FAILURE: NULL.
 */
char **strtow(char *str)
{
	int i, j, k;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);
	words = words2D(str);
	i = 0;
	k = 0;
	while (str[k] != '\0')
	{
		j = 0;
		while (str[k] != ' ')
		{
			words[i][j] = str[k];
			k++;
			j++;
			if (str[k] == ' ')
				i++;
		}
		k++;
	}
	return (words);
}
