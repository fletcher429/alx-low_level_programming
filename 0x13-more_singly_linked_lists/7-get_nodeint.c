#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node
 * @head: the first node
 * @index: index of the nth node
 * Return: NULL
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int  counter = 0;

	temp = head;
	if (!index)
		return (NULL);

	while (temp != NULL && counter < index)
	{
		temp = temp->next;
		counter++;

	}
	if (counter == index)
		return (temp);

	return (NULL);
}
