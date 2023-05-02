#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node
 * @head: 1 node
 * @index: index of nth node
 * Return: data
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int counter;

	temp = head;

	for (counter = 0; temp != NULL && counter < index; counter++)
	{
		temp = temp->next;
	}
	return (temp);
}
