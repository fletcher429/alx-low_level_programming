#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - intilializes dog variable
 * @d: first para
 * @name: second para
 * @age: thirdpara
 * @owner: the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;


}
