#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash table you want to look into
 * @key: is the key you are looking for
 * Return: value assosiated with key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *test_node;

	index = key_index((unsigned const char *)key, ht->size);

	test_node = ht->array[index];

	while (test_node != NULL)
	{
		if (strcmp(test_node->key, key) == 0)
			return (test_node->value);
		test_node = test_node->next;
	}

	return (NULL);
}
