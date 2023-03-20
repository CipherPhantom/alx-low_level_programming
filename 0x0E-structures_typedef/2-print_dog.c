#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints a struct dog.
 * @d: Pointer to struct.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL || d->name[0] == '\0')
		d->name = "(nil)";
	printf("Name: %s\n", d->name);
	if (d->age <= 0.00)
		printf("Age: (nil)\n");
	else
		printf("Age %f\n", d->age);

	if (d->owner == NULL || d->owner[0] == '\0')
		d->owner = "(nil)";
	printf("Owner: %s\n", d->owner);
}
