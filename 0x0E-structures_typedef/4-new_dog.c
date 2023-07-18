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

	if (name == NULL || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d != NULL)
	{
		for (i = 0; name[i] != '\0'; i++)
			;
		i++;
		d->name = malloc(i * sizeof(char));
		if (d->name == NULL)
		{
			free(d);
			return (NULL);
		}
		for (i = 0; name[i] != '\0'; i++)
			d->name[i] = name[i];
		d->name[i] = '\0';
		for (i = 0; owner[i] != '\0'; i++)
			;
		i++;
		d->owner = malloc(i * sizeof(char));
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
