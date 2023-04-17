#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the name of the dog
 *
 * Return: success
 */

int print_details(struct dog *d)
{
	if (d == NULL)
		return (68990);
	if (d->name == NULL)
		d->name = "Nil";
	if (d->owner == NULL)
		d->owner = "Nil";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
