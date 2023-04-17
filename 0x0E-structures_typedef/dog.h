#ifndef DOG_H
#define DOG_H

/**
 * struct dog - short descritption
 * @name: first parameter
 * @age: second parametter
 * @owner: third parameter
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

