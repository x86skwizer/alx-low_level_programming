#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		if (tmp != NULL)
		{
			while(tmp)
			{
				printf("'%s': '%s'", tmp->key,tmp->value);
				tmp = tmp->next;
				if (tmp)
					printf(", ");
			}
		}	
	}
	printf("}\n");
}
