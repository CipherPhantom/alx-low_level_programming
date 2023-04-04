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
 * delete_nodeint_at_index - Deletes the node at index index
 * of a listint_t linked list.
 * @head: Pointer to the head pointer of listint_t list
 * @index: Index
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *tmp1;

	if (!head)
		return (-1);

	tmp = get_nodeint_at_index(*head, index);
	if (!tmp)
		return (-1);

	if (index == 0)
		*head = tmp->next;
	else
	{
		tmp1 = get_nodeint_at_index(*head, index - 1);
		tmp1->next = tmp->next;
	}
	free(tmp);
	return (1);
}
