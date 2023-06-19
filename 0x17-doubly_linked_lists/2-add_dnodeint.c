#include "lists.h"
/**
 * add_dnodeint - adds a node at the head of aa list
 * @head:  begining of the list
 * @n: node to be addded
 * Return: head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = n;
	temp->prev = NULL;
	temp->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = temp;
	}

	*head = temp;
	return (temp);
}
