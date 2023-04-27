#include "lists.h"

/**
 * add_node_end - adds the  node to thne end of list
 * @head: head node;
 * @str: pointer of string added
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current = *head;
	int len = 0;

	while (str[len])
		len++;

	if (!head || !str)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		current = *head;
		while (current->next)
		{
			current = current->next;
		}
	}
	return (new);
}
