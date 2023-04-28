#include "lists.h"

/**
 * add_nodeint - adds  to the head
 * @head: first node
 * @n: int
 * Return: new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
