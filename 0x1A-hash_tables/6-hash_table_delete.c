#include "hash_tables.h"
/**
 * hash_table_delete - deletes the hash table
 * @ht: hash table to be deleted
 * Return nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	hash_node_t *temp;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			temp = node->next;
			free(node->value);
			free(node->key);
			free(node);
			node = temp;
		}
	}
	free(ht->array);
	free(ht);
}
