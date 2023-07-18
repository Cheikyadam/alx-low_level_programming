#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initilization off my dog
 * @d: the dog
 * @name: his name
 * @age: his age
 * @owner: the owner
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	int i;

	d->name = malloc(sizeof(name));
	for (i = 0; name[i] != '\0'; i++)
		d->name[i] = name[i];
	d->name[i] = '\0';
	d->owner = malloc(sizeof(owner));
	for (i = 0; owner[i] != '\0'; i++)
		d->owner[i] = owner[i];
	d->owner[i] = '\0';
	d->age = age;
}
