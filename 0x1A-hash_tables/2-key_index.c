#include "hash_tables.h"
/**
 * key_index -  the function give the index of a key
 * @key: retrive the index of a key
 * @size: size of the hash table
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
