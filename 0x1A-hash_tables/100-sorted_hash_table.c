#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table.
 * @size: The size of the Hash table
 *
 * Return: pointer to the newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(shash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(shash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	table->shead = NULL;
	table->stail = NULL;
	return (table);
}

/**
 * set_sort - print sorted linked list
 * @ht: hash table
 * @node: node
 * @key: key
 */
void set_sort(shash_table_t *ht, shash_node_t *node, const char *key)
{
	shash_node_t *tmp;

	if (ht->shead == NULL)
	{
		ht->shead = node;
		node->sprev = NULL;
		node->snext = NULL;
		ht->stail = node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		node->sprev = NULL;
		node->snext = ht->shead;
		ht->shead->sprev = node;
		ht->shead = node;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		if (strcmp(tmp->key, key) > 0)
		{
			node->sprev = tmp->sprev;
			node->snext = tmp;
			tmp->sprev = node;
		}
		else
		{
			node->sprev = tmp;
			node->snext = tmp->snext;
			if (!tmp->snext)
				ht->stail = node;
			else
				tmp->snext->sprev = node;
			tmp->snext = node;
		}
	}

}

/**
 * shash_table_set - function that adds element to hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: key to look for in hash table
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node, *tmp;
	unsigned long int index;

	if (!ht || !key || !*key || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->shead;
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
		tmp = tmp->snext;
	}
	node = malloc(sizeof(shash_node_t));
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
	set_sort(ht, node, key);
	return (1);
}

/**
 * shash_table_get - function that retrieves a value associated with a key
 * @ht: hash table you want to look into
 * @key: key you are looking for
 *
 * Return: value associated with the element
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *tmp;
	unsigned long int index;

	if (!ht || !key || !*key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->snext;
	}
	return (NULL);
}

/**
 * shash_table_print - function that prints a hash table
 * @ht: hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;

	if (!ht)
		return;
	printf("{");
	tmp = ht->shead;
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
 * shash_table_print_rev - function that prints a hash table
 * @ht: hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;

	if (!ht)
		return;
	printf("{");
	tmp = ht->stail;
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
 * shash_table_delete - Deletes a hash table.
 * @ht: The hash table to be deleted.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *tmp;

	if (ht == NULL)
		return;
	current = ht->shead;
	while (current != NULL)
	{
		tmp = current->snext;
		free(current->key);
		free(current->value);
		free(current);
		current = tmp;
	}
	free(ht->array);
	free(ht);
}
