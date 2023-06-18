#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - prints a double linked list
 * @h: head node
 * Return: Count
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
