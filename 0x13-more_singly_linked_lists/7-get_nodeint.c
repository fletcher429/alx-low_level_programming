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
	listint_t *temp = head;
	unsigned int  counter;

	for (counter = 0; temp != NULL && counter < index; counter++)
	{
		temp = temp->next;
	}
	return (temp);
}
