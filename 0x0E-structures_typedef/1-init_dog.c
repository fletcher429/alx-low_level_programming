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
	d = malloc(sizeof(struct dog));
	if(!d)
		return  (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;


}
