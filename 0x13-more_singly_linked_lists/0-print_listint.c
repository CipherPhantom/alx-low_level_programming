#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to head of linked list
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;
	const listint_t *tmp;

	if (!h)
		return (num);

	tmp = h;
	num++;
	while (tmp->next)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		num++;
	}
	printf("%d\n", tmp->n);
	return (num);
}
