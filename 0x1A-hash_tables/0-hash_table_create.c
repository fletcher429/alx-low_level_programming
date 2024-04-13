#include "hash_tables.h"
/**
 * hash_table_create - function to create a new hash table
 * @size: size of the hash table
 * Return: new_hash table
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;
	unsigned long int i;

	new_hash = malloc(sizeof(hash_table_t));
	if (!new_hash)
		return (NULL);
	new_hash->size = size;

	new_hash->array = malloc(sizeof(hash_node_t *) * size);
	if (!new_hash->array)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		new_hash->array[i] = NULL;
	}
	return (new_hash);
}
