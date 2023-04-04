#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: Pointer to head of linked list
 *
 * Return: The number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;
	const listint_t *tmp;

	if (!h)
		return (num);

	tmp = h;
	num++;
	while (tmp->next)
	{
		tmp = tmp->next;
		num++;
	}
	return (num);
}
