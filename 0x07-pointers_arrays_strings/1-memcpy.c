#include "main.h"
/**
 * *_memcpy - copies n bytes from memory area src to memory area dest
 * @dest : destination memory.
 * @src : source string.
 * @n : number of bytes to be copied.
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest2, *src2;
	unsigned int i;

	dest2 = dest;
	src2 = src;
	i = 0;
	while (i < n)
	{
		*dest2 = *src2;
		dest2++;
		src2++;
		i++;
	}
	return (dest);
}
