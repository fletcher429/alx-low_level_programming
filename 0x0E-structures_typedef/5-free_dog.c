#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dog
 * @d: structure dog
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}