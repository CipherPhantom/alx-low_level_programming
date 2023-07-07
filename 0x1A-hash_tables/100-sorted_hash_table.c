#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table
 *
 * @size: The size of the table array
 *
 * Return: A pointer to the created sorted hash table or NULL if it fails
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = calloc(size, sizeof(shash_node_t *));
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);

}

/**
 * screate_node - Creates a new node
 *
 * @key: The key
 * @value: The value
 *
 * Return: A pointer to the new node and NULL otherwise
 */
shash_node_t *screate_node(const char *key, const char *value)
{
	shash_node_t *node;

	node = malloc(sizeof(shash_node_t));
	if (!node)
		return (NULL);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	node->sprev = NULL;
	node->snext = NULL;

	return (node);
}

/**
 * shash_table_set - Adds an element to the sorted hash table
 *
 * @ht: The sorted hash table
 * @key: The key
 * @value: The value
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node;

	if (!ht || !key || strlen(key) == 0 || !value)
		return (0);

	node = shash_table_set_index(ht, key, value);
	if (!node)
		return (0);
	shash_table_sort(ht, node);
	return (1);
}

/**
 * shash_table_set_index - Places an elements at its index in the hash table
 *
 * @ht: The hash table
 * @key: The key
 * @value: The value
 *
 * Return: A pointer to the element or NULL otherwise
 */
shash_node_t *shash_table_set_index(shash_table_t *ht, const char *key,
		const char *value)
{
	unsigned long int index;
	shash_node_t *node, *curr = NULL;

	index = key_index((unsigned char *)key, ht->size);
	curr = ht->array[index];

	while (curr)
	{
		if (strcmp(curr->key, key) == 0)
		{
			free(curr->value);
			curr->value = strdup(value);
			return (curr);
		}
		curr = curr->next;
	}

	node = screate_node(key, value);
	if (!node)
		return (NULL);

	node->next = ht->array[index];
	ht->array[index] = node;

	return (node);
}

/**
 * shash_table_sort - Sorts the hash table
 *
 * @ht: The hash table
 * @node: The new node
 */
void shash_table_sort(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *prev = NULL, *curr;

	if (!ht->shead)
	{
		ht->shead = node;
		return;
	}

	curr = ht->shead;
	while (curr)
	{
		if (strcmp(node->key, curr->key) < 0)
		{
			node->snext = curr;
			node->sprev = prev;
			curr->sprev = node;
			if (prev)
				prev->snext = node;
			else
				ht->shead = node;
			break;
		}
		if (strcmp(node->key, curr->key) == 0)
			return;
		if (strcmp(node->key, curr->key) > 0)
		{
			prev = curr;
			curr = curr->snext;
		}
	}
	if (!curr)
	{
		prev->snext = node;
		node->sprev = prev;
		ht->stail = node;
		return;
	}
	while (curr->snext)
		curr = curr->snext;
	ht->stail = curr;
}

/**
 * shash_table_get - Retrieves a value associated with a key
 *
 * @ht: The hash table
 * @key: The key
 *
 * Return: The value associated with the element, or NULL
 *	   if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *tmp;

	if (!ht || !key || strlen(key) == 0)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Prints a sorted hash table
 *
 * @ht: The hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;

	if (!ht)
		return;

	tmp = ht->shead;
	printf("{");
	while (tmp)
	{
		printf("'%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->snext;
		if (tmp)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table
 *
 * @ht: The hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;

	if (!ht)
		return;

	tmp = ht->stail;
	if (!ht->stail && ht->shead)
		tmp = ht->shead;
	printf("{");
	while (tmp)
	{
		printf("'%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->sprev;
		if (tmp)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table
 * @ht: The hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *tmp;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
	}

	free(ht->array);
	free(ht);
}
