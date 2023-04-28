#include "lists.h"
/**
 * print_listint - prints all the elements
 * @h: head
 * Return: head
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	int count = 0;

	temp = h;

	while (h)
	{
		printf("%i\n", temp->n);
		count++;
		temp = temp->next;
	}

	return (count);

}
