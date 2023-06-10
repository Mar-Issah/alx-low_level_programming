
#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Function that prints a hash table
 *
 * @ht: Hash table to print
 **/
void hash_table_print(const hash_table_t *ht)
{
	unsigned int printed_entries = 0;
	unsigned int idx;

	if (ht == NULL)
		return;

	printf("{");

	for (idx = 0; idx < ht->size; idx++)
	{
		hash_node_t *node = ht->array[idx];

		while (node != NULL)
		{
			if (printed_entries > 0)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			printed_entries++;
			node = node->next;
		}
	}

	printf("}\n");
}
