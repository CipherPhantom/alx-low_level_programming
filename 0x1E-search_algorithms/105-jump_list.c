#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers
 * using the Jump search algorithm.
 *
 * @list: A pointer to the head of the list to search in.
 * @size: The number of nodes in list.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where value is located,
 * othewise NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *curr, *prev;
	size_t jump, i;

	if (!list || size == 0)
		return (NULL);

	jump = sqrt(size);
	curr = prev = list;
	while (curr->n < value && curr->next)
	{
		prev = curr;
		i = 0;
		while (i < jump && curr->next)
		{
			curr = curr->next;
			i++;
		}
		printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
	}

	printf("Value found between indexes [%lu] and [%ld]\n",
			prev->index, curr->index);
	while (prev->n < value && prev->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		prev = prev->next;
	}
	printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);

	if (prev->n == value)
		return (prev);
	return (NULL);
}
