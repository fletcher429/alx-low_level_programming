#include "lists.h"

/**
 * sum_listint - gets the sumof data in a linked list
 * @head: the first node
 * Return: su
 */
int sum_listint(listint_t *head)
{
	listint_t *results;
	int sum = 0;

	results = head;

	while (results != NULL)
	{
		sum += results->n;
		results = results->next;

	}
	return (sum);
}
