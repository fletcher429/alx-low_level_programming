#include "lists.h"

/**
 * free_listint2 - frees listnt list
 * @head: the first node
 * Return: null
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *tmp;


	current =  *head;

	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
	*head = NULL;
}
