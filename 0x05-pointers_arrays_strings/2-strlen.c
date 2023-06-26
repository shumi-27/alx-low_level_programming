#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s : Pointer.
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int str = 0;

	while (*s != '\0')
	{
		str ++;
		s++;
	}

	return (str);

}
