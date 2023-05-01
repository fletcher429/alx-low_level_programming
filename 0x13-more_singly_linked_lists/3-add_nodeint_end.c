#include "lists.h"

/**
 * add_nodeint_end - adds new node to the end
 * @head: the head
 * @n: number
 * Return: new_node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *end;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	end = *head;

	while (end->next != NULL)
	{
		end = end->next;
	}
	end->next = new;
	return (new);
	free(new);
}
