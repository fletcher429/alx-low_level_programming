#include "hash_tables.h"
/**
 * hash_table_set adds element to the hash table
 * @ht:  is the hash table you want to add or update the key/value to
 * @key:  key can not be an empty string
 * @value: s the value associated with the key. value must be duplicated. value 
 * Return: 1 if succes 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current;
	hash_node_t *new_node;
	unsigned long index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}

	index = key_index((unsigned const char*)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);

			if (!current->value)
				return (0);
			return (1);
		}
		current = current->next; 
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->value = strdup(value);
	if(!new_node->value)
	{
		free(new_node);
		return (0);
	}
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
