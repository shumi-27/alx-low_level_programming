#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - allocates memory for an array, using malloc.
 * @nmemb :  array elements.
 * @size : size of each element.
 * Return: Pointer ti array.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	unsigned char *zero;

	i = nmemb * size;

	if (i == 0)
	{
		return (0);
	}
	ptr = malloc(i);
	if (ptr == NULL)
	{
		return (0);
	}
	zero = ptr;
	while (i)
	{
		*zero = 0;
		i--;
		zero++;
	}
	return (ptr);
}
