#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: Head pointer of listint_t list.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (!head)
		return;

	while (head->next)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(head);
}
