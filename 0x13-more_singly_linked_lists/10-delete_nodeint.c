#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at the index
 * @head: the first node
 * @index: the nth(index)
 * Return: temp
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *prev = NULL;
	unsigned int counter;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (counter = 0; temp != NULL && counter < index; counter++)
	{
		prev = temp;
		temp = temp->next;
	}
	if (temp == NULL)
		return -1;
	prev->next = temp->next;
	free(temp);
	return (1);
}
