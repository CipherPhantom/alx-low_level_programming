#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: Head pointer of linked list.
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (!head)
		return;
	while (head->next)
	{
		free(head->str);
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head->str);
	free(head);
}
