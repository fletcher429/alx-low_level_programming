#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delets the head of list
 *
 * @head: head node
 * Return: new node
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int data;

	if (*head  == NULL)
	{
		return (0);
	}

	current = *head;
	*head = (*head)->next;
	data = current->n;
	free(current);
	return (data);



}
