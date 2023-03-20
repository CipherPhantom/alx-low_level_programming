#include "dog.h"
#include <stdlib.h>
#include <string.h>

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

	dog_n = malloc(sizeof(struct dog));
	if (dog_n == NULL)
		return (NULL);

	if (name != NULL)
	{
		name_n = malloc(sizeof(char) * (strlen(name) + 1));
		if (name_n == NULL)
		{
			free(dog_n);
			return (NULL);
		}
		name_n = name;
		dog_n->name = name_n;
	}
	if (owner != NULL)
	{
		owner_n = malloc(sizeof(char) * (strlen(owner) + 1));
		if (owner_n == NULL)
		{
			free(dog_n);
			free(name_n);
			return (NULL);
		}
		owner_n = owner;
		dog_n->owner = owner_n;
	}
	dog_n->age = age;
	return (dog_n);
}
