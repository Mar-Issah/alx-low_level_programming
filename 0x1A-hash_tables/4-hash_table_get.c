#include "hash_tables.h"
/**
 * hash_table_get - Retrieves a value associated with a key
 *
 * @ht: Hash table
 * @key: Key
 *
 * Return: Value of the associated with key
 **/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	if (!ht || !key || strlen(key) == 0 || !ht->array || ht->size == 0)
		return (NULL);

	unsigned int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);

		current = current->next;
	}

	return (NULL);
}
