#include "hash_tables.h"

/**
 * hash_table_get - function that returns the value associated with a key
 * @ht: pointer to the hash table
 * @key: key to be hashed
 *
 * Return: NULL on failure or a pointer to the value on success.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
		return (node->value);
		node = node->next;
	}
	return (NULL);
}
