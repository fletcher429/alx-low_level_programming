#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;
	unsigned long int i;

	new_table = malloc(sizeof(shash_table_t));
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

	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *current, *new_node;
	unsigned long int index;

	if (!ht || !key || !*key || !value)
		return (0);

	index = hash_djb2((const unsigned char *)key) % ht->size;
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

	new_node = malloc(sizeof(shash_node_t));
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

		if (!temp)
		{
			ht->stail->snext = new_node;
			new_node->sprev = ht->stail;
			ht->stail = new_node;
		}
		else
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

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *test_node;
	unsigned long int index;

	if (!ht || !key)
		return (NULL);

	index = hash_djb2((const unsigned char *)key) % ht->size;

	test_node = ht->array[index];

	while (test_node != NULL)
	{
		if (strcmp(test_node->key, key) == 0)
			return (test_node->value);
		test_node = test_node->next;
	}

	return (NULL);
}

void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *node;
	int flag = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			flag = 1;
			node = node->next;
		}
	}
	printf("}\n");
}

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;
	int flag = 0;

	if (!ht)
		return;

	printf("{");
	current = ht->stail;
	while (current != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		flag = 1;
		current = current->sprev;
	}
	printf("}\n");
}

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *node, *temp;

	if (!ht)
		return;

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
