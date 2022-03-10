#include <stdlib.h>
#include "dog.h"

/**
  * init_dog - Initializes the doggo structure
  * @d: Doge structure
  * @name: doggo's name
  * @age: doggo's age
  * @owner: doggo's owner
  *
  * Return: 0
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
