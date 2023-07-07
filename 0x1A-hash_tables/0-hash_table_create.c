#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 *
 * @size: The size of the table array
 *
 * Return: A pointer to the created hash table or NULL if it fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	if (size > 0)
	{
		ht = malloc(sizeof(hash_table_t));
		if (!ht)
			return (NULL);
		ht->array = calloc(size, sizeof(hash_node_t *));
		if (!ht->array)
			return (NULL);
		for (i = 0; i < size; i++)
			ht->array[i] = NULL;
		ht->size = size;
		return (ht);
	}
	return (NULL);
}
