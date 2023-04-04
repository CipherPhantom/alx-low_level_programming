#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: The pointer to the head pointer of listint_t list.
 * @n: New n
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t)), *tmp;

	if (!node)
		return (NULL);
	if (!head)
		return (NULL);

	node->n = n;
	node->next = NULL;

	tmp = *head;
	if (!tmp)
		*head = node;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = node;
	}
	return (node);
}
