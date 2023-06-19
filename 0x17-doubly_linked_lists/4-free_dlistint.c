#include "lists.h"
/**
 * free_dlistint - frees a linked list
 * @head: head pointer
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	
	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}

