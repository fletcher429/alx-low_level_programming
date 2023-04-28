#include "lists.h"

/**
 * listint_len - returns number of list
 * @h: head
 * Return: number of node
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
