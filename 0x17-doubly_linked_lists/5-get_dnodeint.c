#include "lists.h"
/**
 * get_dnodeint_at_index - gets the node by index
 * @head: the begining node
 * @index: index to be retrieved
 * Return: index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *current;

	current = malloc(sizeof(dlistint_t));

	current = head;

	while (current != NULL)
	{
		if (index == counter)
			return (current);
		counter++;
		current = current->next;
	}
	return (NULL);

}
