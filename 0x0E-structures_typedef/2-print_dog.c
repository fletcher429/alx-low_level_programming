#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_details - prints dog
 * struct dog - holds the dog var
 * @d: dog
 *
 * Return: success
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
