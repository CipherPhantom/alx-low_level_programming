#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: Head pointer of listint_t list
 *
 * Return: Sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp;

	if (!head)
		return (sum);

	tmp = head;
	while (tmp->next)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	sum += tmp->n;
	return (sum);
}
