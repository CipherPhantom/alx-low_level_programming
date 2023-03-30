#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to Head pointer to the linked lists.
 * @str: Pointer to new string.
 *
 * Return: Head pointer.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newn = malloc(sizeof(list_t)), *temp;

	if (!newn)
		return (NULL);
	if (!head)
		return (NULL);
	if (!str)
		return (NULL);

	newn->str = strdup(str);
	newn->len = strlen(str);
	newn->next = NULL;

	temp = *head;
	if (!temp)
		*head = newn;
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = newn;
	}
	return (*head);
}
