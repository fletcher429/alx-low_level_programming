#include "lists.h"

/**
 * free_listint - frees list
 * @head: head  node
 * Return (head);
 *
 */

void free_listint(listint_t *head)
{
	listint_t *current, *temp;

	current = head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}

}
