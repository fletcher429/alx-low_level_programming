#include "lists.h"
/**
 * insert_nodeint_at_index - insert node at the index
 * @head: the first node
 * @idx: index of the node
 * @n: intergeri
 * Return: new head
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	unsigned int i  = 0;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}

	current = *head;

	while (i < idx - 1 && current != NULL)
	{
		current = current->next;
		i++;
	}
	if (current != NULL)
	{
		new->next = current->next;
		current->next = new;
	}
	else
	{
		free(new);
		return (NULL);
	}
	return (*head);



}

