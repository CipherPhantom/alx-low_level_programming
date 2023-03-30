#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: Head of the linked list.
 *
 * Return: Number of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;
	const list_t *temp;

	if (h == NULL)
		return (n);

	temp = h;
	while (temp)
	{
		temp = temp->next;
		n++;
	}
	return (n);
}
