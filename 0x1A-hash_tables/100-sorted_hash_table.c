#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the hash table
 * Return: pointer to the new hash table, or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	tab shash_table_t *new_table = malloc(sizeof(shash_table_t));
	if (!new_table)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(shash_node_t *) * size);
	if (!new_table->array)
	{
		free(new_table);
		return (NULL);
	}

	new_table->shead = NULL;
	new_table->stail = NULL;

	return (new_table);
}

/**
 * shash_table_set - inserts or updates a key-value pair in a sorted hash table
 * @ht: pointer to the hash table
 * @key: key string
 * @value: value string
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	if (!ht || !key || !*key || !value)
		return (0);

	unsigned long index = hash_djb2((const unsigned char *)key) % ht->size;
	shash_node_t *current = ht->array[index];

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

	shash_node_t *new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	// Inserting into the sorted linked list
	if (!ht->shead)
	{
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else
	{
		shash_node_t *temp = ht->shead;
		shash_node_t *prev = NULL;

		while (temp && strcmp(temp->key, key) < 0)
		{
			prev = temp;
			temp = temp->snext;
		}

		if (!temp) // Insert at the end
		{
			ht->stail->snext = new_node;
			new_node->sprev = ht->stail;
			ht->stail = new_node;
		}
		else // Insert in the middle
		{
			new_node->snext = temp;
			new_node->sprev = prev;
			if (prev)
				prev->snext = new_node;
			else
				ht->shead = new_node;
			temp->sprev = new_node;
		}
	}

	return (1);
}

/**
 * shash_table_get - retrieves the value associated with a key
 * @ht: pointer to the hash table
 * @key: key string
 * Return: value string associated with the key, or NULL if key not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	if (!ht || !key)
		return (NULL);

	unsigned long index = hash_djb2((const unsigned char *)key) % ht->size;
	shash_node_t *current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}

	return (NULL);
}

/**
 * shash_table_print - prints the sorted hash table
 * @ht: pointer to the hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	if (!ht)
		return;

	shash_node_t *current = ht->shead;
	printf("{");
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current->snext)
			printf(", ");
		current = current->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints the sorted hash table in reverse order
 * @ht: pointer to the hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	if (!ht)
		return;

	shash_node_t *current = ht->stail;
	printf("{");
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current->sprev)
			printf(", ");
		current = current->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes the sorted hash table
 * @ht: pointer to the hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	if (!ht)
		return;

	for (unsigned long i = 0; i < ht->size; i++)
	{
		shash_node_t *node = ht->array[i];
		while (node != NULL)
		{
			shash_node_t *temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = temp;
		}
	}

	free(ht->array);
	free(ht);
}
