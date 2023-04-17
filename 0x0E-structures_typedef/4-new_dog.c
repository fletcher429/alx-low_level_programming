#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *new_dog;
	size_t l1, l2;

	l1 = strlen(name);
	l2 = strlen(owner);

	new_dog = malloc(sizeof(dog_t));
	if(!new_dog)
		return (NULL);
	new_dog->name = malloc(sizeof(char) * (l1 + 1));
	if(!new_dog->name)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(sizeof(char) * (l2 + 1));
	if(!new_dog->owner)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}
	strcpy(new_dog->name, name);
	strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return(new_dog);

}
