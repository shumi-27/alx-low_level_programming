#include "main.h"
/**
 * *_memset - fills the first n bytes of the memory area pointed to by s
 * @s : area to be filled.
 * @b : value.
 * @n : number of elements to be filled.
 * Return: pointer to memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *mem;
	int i;

	mem = s;
	i = 0;
	while ((unsigned int)i < n)
	{
		*mem = b;
		mem++;
		i++;
	}
	return (s);
}
