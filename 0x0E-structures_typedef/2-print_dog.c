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
		printf("Name: (nill)\n");
	if (d->owner == NULL)
		printf("Name: (nill)\n");
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
