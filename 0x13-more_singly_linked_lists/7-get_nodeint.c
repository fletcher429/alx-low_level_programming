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
	unsigned int  counter = 1;

	temp = head;
	if (!index)
		return (NULL);

	while (temp != NULL)
	{
		if (counter == index)
		{
			return (temp);

		}
		counter++;
		temp = temp->next;

	}
	return (head);
}
