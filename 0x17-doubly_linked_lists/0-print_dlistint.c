#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints a double linked list
 * @h: head node
 * Return: Count
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}
	return (count);
}
