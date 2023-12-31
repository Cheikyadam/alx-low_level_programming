#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initilization of my dog
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

	if (d != NULL)
	{
		if (name != NULL)
		{
			for (i = 0; name[i] != '\0'; i++)
				;
			i++;
			d->name = malloc(i * sizeof(char));
			if (d->name != NULL)
			{
				for (i = 0; name[i] != '\0'; i++)
					d->name[i] = name[i];
				d->name[i] = '\0';
			}
		}
		if (owner != NULL)
		{
			for (i = 0; owner[i] != '\0'; i++)
				;
			i++;
			d->owner = malloc(i * sizeof(char));
			if (d->owner != NULL)
			{
				for (i = 0; owner[i] != '\0'; i++)
					d->owner[i] = owner[i];
				d->owner[i] = '\0';
			}
		}
		d->age = age;
	}
}
