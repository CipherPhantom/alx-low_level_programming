#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: The pointer to the head pointer of listint_t list.
 * @n: New n
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp = malloc(sizeof(listint_t));

	if (!tmp)
		return (NULL);
	if (!head)
		return (NULL);

	tmp->n = n;
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
