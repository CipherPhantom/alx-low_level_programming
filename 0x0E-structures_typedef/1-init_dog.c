#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog.
 * @d: Dog struct pointer
 * @name: Name
 * @age: Age
 * @owner: Owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
