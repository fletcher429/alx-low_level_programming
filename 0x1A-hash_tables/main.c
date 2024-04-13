#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

void print_hash_table(hash_table_t *ht);
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    print_hash_table(ht);
    return (EXIT_SUCCESS);
}


void print_hash_table(hash_table_t *ht)
{
    unsigned long int i;
    if (ht == NULL)
    {
        printf("Hash table is NULL\n");
        return;
    }

    printf("Printing hash table:\n");

    for (i = 0; i < ht->size; i++)
    {
        hash_node_t *current = ht->array[i];
        printf("Bucket %lu: ", i);
        while (current != NULL)
        {
            printf("-> [%s: %s] ", current->key, current->value);
            current = current->next;
        }
        printf("-> NULL\n");
    }
}
