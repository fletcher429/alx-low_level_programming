#include "lists.h"

/**
 * add_node - adds node to the end
 * @head: start of linked list
 * @str: pointer of node added
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len_str;

	for (len_str = 0; str[len_str] != '\0'; len_str++)
		;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len_str;
	(*head)  = new;

	return (*head);
}
