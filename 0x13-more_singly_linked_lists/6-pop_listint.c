#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: Pointer to the head pointer of listint_t list
 *
 * Return: the n data in head.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (!head)
		return (0);
	if (!(*head))
		return (0);

	n = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (n);
}
