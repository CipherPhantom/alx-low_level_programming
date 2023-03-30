#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Head of the linked list.
 *
 * Return: Number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	list_t *temp = NULL;
	int len;
	char *str;

	if (h == NULL)
		return (n);

	*temp = *h;
	while (temp->next)
	{
		len = temp->len;
		str = temp->str;
		if (!str)
		{
			str = "(nil)";
			len = 0;
		}
		printf("[%u] %s\n", len, str);
		n++;
		temp = temp->next;
	}
	return (n);
}
