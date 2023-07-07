#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 *
 * @ht: The hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int indexFound = 0;
	hash_node_t *tmp;

	if (!ht)
		return;

	printf("{");
	while (i < ht->size)
	{
		tmp = ht->array[i];
		if (tmp)
			indexFound = 1;

		while (tmp)
		{
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
			if (tmp)
				printf(", ");
		}

		if (ht->array[i + 1] && indexFound)
			printf(", ");
		i++;
	}
	printf("}\n");
}
