#include "hash_tables.h"

/**
 * create_node - Creates a new node
 *
 * @key: The key
 * @value: The value
 *
 * Return: A pointer to the new node and NULL otherwise
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	return (node);
}

/**
 * hash_table_set - Adds an element to the hash table
 *
 * @ht: The hash table
 * @key: The key
 * @value: The value
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *current = NULL;

	if (!ht || !key || strlen(key) == 0 || !value)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	node = create_node(key, value);
	if (!node)
		return (0);
	if (ht->array[index])
	{
		if (!(strcmp(ht->array[index]->key, key) == 0))
			current = ht->array[index];
	}
	node->next = current;
	ht->array[index] = node;
	return (1);
}
