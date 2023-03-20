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
	else
	{
		printf("Name: ");
		if (d->name == NULL || d->name[0] == '\0')
			printf("(nil)\n");
		else
			printf("%s\n", d->name);

		printf("Age: ");
		if (d->age <= 0.00)
			printf("(nil)\n");
		else
			printf("%f\n", d->age);

		printf("Owner: ");
		if (d->owner == NULL || d->owner[0] == '\0')
			printf("(nil)\n");
		else
			printf("%s\n", d->owner);
	}
}
