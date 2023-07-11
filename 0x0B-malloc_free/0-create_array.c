#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *create_array - creates array and initializes it with character.
 * @size : size of array.
 * @c : character.
 * Return: Pointer to array.
 */
char *create_array(unsigned int size, char c)
{

	char *arr, *arrc;

	if (size == 0)
	{
		return (0);
	}
	arr = malloc(sizeof(char) * size);
	arrc = arr;
	if (arr == 0)
	{
		return (0);
	}
	while (size)
	{
		*arr = c;
		arr++;
		size--;
	}
	return (arrc);
}
