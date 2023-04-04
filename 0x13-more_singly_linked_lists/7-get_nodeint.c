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
