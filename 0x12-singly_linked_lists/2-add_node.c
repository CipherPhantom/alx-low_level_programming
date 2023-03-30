#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to Head pointer to the linked lists.
 * @str: Pointer to new string.
 *
 * Return: Head pointer.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newn = malloc(sizeof(list_t));
	
	if(!newn)
		return (NULL);
	if (!head)
		return (NULL);
	if (!str)
		return (NULL);

	newn->str = strdup(str);
	newn->len = strlen(str);
	newn->next = *head;
	*head = newn;
	return (newn);
}
