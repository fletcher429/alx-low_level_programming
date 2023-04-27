#include"lists.h"

/**
 * free_list - frees list
 * @head: the node
 * Return: new node
 *
 */
void free_list(list_t *head)
{
	list_t *free_list;

	while (head)
	{
		free_list = head->next;
		free(head->str);
		free(head);
		head = free_list;
	}
}
