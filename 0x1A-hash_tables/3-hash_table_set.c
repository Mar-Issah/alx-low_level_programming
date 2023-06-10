#include "hash_tables.h"

/**
 * create_node - Function that create a hash node
 *
 * @key: key
 * @value: value
 *
 * Return: Address of the new hash node
 **/
hash_node_t *create_node(const char *key, const char *value)
{
	char *new_key = strdup(key);
	if (!new_key)
		return (NULL);

	char *new_value = strdup(value);
	if (!new_value)
	{
		free(new_key);
		return (NULL);
	}

	hash_node_t *new_node = calloc(1, sizeof(hash_node_t));
	if (!new_node)
	{
		free(new_key);
		free(new_value);
		return (NULL);
	}

	new_node->next = NULL;
	new_node->key = new_key;
	new_node->value = new_value;

	return (new_node);
}

/**
 * hash_table_set -  function that adds an element to the hash table
 *
 * @ht: Hash table
 * @key: the Key
 * @value: Value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (!ht || !key || !value || strlen(key) == 0 || !ht->array || ht->size == 0)
		return (0);

	unsigned int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			char *new_value = strdup(value);
			if (!new_value)
				return (0);

			free(current->value);
			current->value = new_value;
			return (1);
		}

		current = current->next;
	}

	hash_node_t *new_node = create_node(key, value);
	if (!new_node)
		return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
