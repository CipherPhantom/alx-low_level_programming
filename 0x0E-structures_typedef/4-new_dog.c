#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog.
 * @name: Name
 * @age: Age
 * @owner: Owner's name
 *
 * Return: Pointer to new dog. if it fails, NULL.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dog_n;
	char *name_n, *owner_n;
	int i;

	dog_n = malloc(sizeof(struct dog));
	name_n = malloc(sizeof(name));
	owner_n = malloc( sizeof(owner));
	if (!owner_n || !name_n || !dog_n)
		return (NULL);
	for (i = 0; name[i]; i++)
		name_n[i] = name[i];
	for (i = 0; owner[i]; i++)
		owner_n[i] = owner[i];
	dog_n->name = name_n;
	dog_n->age = age;
	dog_n->owner = owner_n;
	return (dog_n);
}
