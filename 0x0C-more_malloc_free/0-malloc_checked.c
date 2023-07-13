#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - allocates memory and returns pointer.
 * @b : number of bytes.
 * Return: Pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(sizeof(*ptr) * b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
