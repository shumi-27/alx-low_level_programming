#include "dog.h"
#include <stdlib.h>
/**
 * *new_dog - creates a new dog.
 * @name :  name
 * @age : age
 * @owner : owner
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *copy;

	copy = malloc(sizeof(dog_t));
	if (copy == NULL)
	{
		return (0);
	}
	copy->name = name;
	copy->age = age;
	copy->owner = owner;
	return (copy);
}
