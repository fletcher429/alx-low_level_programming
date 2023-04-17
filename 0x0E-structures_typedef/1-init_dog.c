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
	d->name = name;
	d->age = age;
	d->owner = owner;


}
/**
 * main - calls the function
 *
 * Return: 0
 */

int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "Poppy", 3.5, "Bob");
	return (0);
}
