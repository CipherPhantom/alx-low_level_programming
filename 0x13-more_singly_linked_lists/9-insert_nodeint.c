#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Head pointer of listint_t list
 * @index: Index
 *
 * Return: Pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	tmp =  head;
	while (tmp->next && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	if (i != index)
		return (NULL);
	return (tmp);
}
/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to the head pointer of the listint_t list
 * @idx: Index to place new node
 * @n: data(n) of new node
 *
 * Return: Address od new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *tmp, *tmpn;

	if (!head)
		return (NULL);

	tmp = get_nodeint_at_index(*head, idx);
	if (!tmp)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = tmp;

	if (idx == 0)
		*head = node;
	else
	{
		tmpn = get_nodeint_at_index(*head, idx - 1);
		tmpn->next = node;
	}
	return (node);
}
