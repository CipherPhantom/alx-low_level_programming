#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: Pointer to the head pointer of listint_t list.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head)
		return;

	while ((*head)->next)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	free(*head);
	*head = NULL;
}
