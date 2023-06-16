#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Head of doubly linked list
 * @idx: index to insert new node
 * @n: Number for new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prev, *current, *node;
	unsigned int i = 1;
	int isInserted = 0;

	if (!h)
		return (NULL);
	if (idx == 0)
	{
		node = add_dnodeint(h, n);
		return (node);
	}
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	current = *h;
	while (current)
	{
		if (i == idx)
		{
			node->prev = prev;
			node->next = current;
			if (current)
				current->prev = node;
			if (prev)
				prev->next = node;
			isInserted = 1;
			break;
		}
		i++;
		prev = current;
		current = current->next;
	}
	if (isInserted)
		return (node);
	return (NULL);
}
