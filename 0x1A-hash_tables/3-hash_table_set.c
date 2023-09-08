#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - function that adds element to hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: key to look for in hash table
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *tmp;
	unsigned long int index;

	if (!ht || !key || !*key || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (!tmp->value)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (0);
	}
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
