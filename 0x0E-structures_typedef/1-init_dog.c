#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - intializes a variable of type dog.
 * @d : dog
 * @name : name
 * @owner : owner
 * @age : age
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->owner = owner;
	d->age = age;
}
