#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints a double linked list
 * @h: head node
 * Return: Count
 */

size_t dlistint_len(const dlistint_t *h)
{
        const dlistint_t *current = h;
        size_t count = 0;

        while (current != NULL)
        {
                /*printf("%d\n", current->n);*/
                count++;
                current = current->next;
        }
        return (count);
}
