#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creating a new dog
 * @name: his name
 * @age: his age
 * @owner: the owner
 *
 * Return: a pointer on a dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d != NULL)
	{
		d->name = malloc(sizeof(name));
		if (d->name == NULL)
		{
			free(d);
			return (NULL);
		}
		for (i = 0; name[i] != '\0'; i++)
			d->name[i] = name[i];
		d->name[i] = '\0';
		d->owner = malloc(sizeof(owner));
		if (d->owner == NULL)
		{
			free(d->name);
			free(d);
			return (NULL);
		}
		for (i = 0; owner[i] != '\0'; i++)
			d->owner[i] = owner[i];
		d->owner[i] = '\0';
		d->age = age;
	}
	return (d);
}
