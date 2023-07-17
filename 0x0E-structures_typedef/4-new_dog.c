#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - determines string length.
 * @str : string.
 * Return: Length.
 */
int _strlen(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}
/**
 * _str_cpy - copies string from source to dest.
 * @dest : dest;
 * @src : source;
 * Return: String.
 */
char *_str_cpy(char *dest, char *src)
{
	char *save;

	save = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (save);
}
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
	int lname, lowner;

	lowner = _strlen(owner);
	lname = _strlen(name);
	copy = malloc(sizeof(dog_t));
	if (copy == NULL)
		return (0);
	copy->name = malloc(sizeof(char) * (lname + 1));
	if (copy->name == NULL)
	{
		free(copy->name);
		return (0);
	}
	copy->owner = malloc(sizeof(char) * (lowner + 1));
	if (copy->owner == NULL)
	{
		free(copy);
		free(copy->name);
		return (0);
	}
	_str_cpy(copy->name, name);
	_str_cpy(copy->owner, owner);
	copy->age = age;
	return (copy);
}
