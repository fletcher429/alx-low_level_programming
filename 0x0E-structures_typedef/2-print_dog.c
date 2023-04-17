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
	if (d !=NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %f\n", (d->owner > 0) ? d->age : 0);
		printf("Ownner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
