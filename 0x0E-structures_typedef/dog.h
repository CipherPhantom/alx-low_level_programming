#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Definition of a struct for a dog.
 * @name: Name
 * @age: Age
 * @owner: Owner's Name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
