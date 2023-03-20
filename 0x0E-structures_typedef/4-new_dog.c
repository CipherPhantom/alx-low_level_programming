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
	if (name == NULL)
	{
		name_n = malloc(sizeof(char) * 1);
		name_n[0] = '\0';
	}
	else
	{
		name_n = malloc(sizeof(char) * (strlen(name) + 1));
		name_n = name;
	}
	if (owner == NULL)
	{
		owner_n = malloc(sizeof(char) * 1);
		owner_n[0] = '\0';
	}
	else
	{
		owner_n = malloc(sizeof(char) * (strlen(owner) + 1));
		owner_n = '\0';
	}

	if (age <= 0.0)
		age = 0;
	dog_n->name = name_n;
	dog_n->age = age;
	dog_n->owner = owner_n;
	return (dog_n);
}
