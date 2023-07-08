#include "main.h"
/**
 * *_strncpy - copies a string.
 * @dest : destination pointer.
 * @src : source string.
 * @n : bytes to be copied.
 * Return: Pointer to copied string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *src2;

	src2 = dest;
	while (*src && n > 0)
	{
		*src2 = *src;
		src++;
		src2++;
		n--;
	}
	while (n > 0)
	{
		*src2 = '\0';
		n--;
		src2++;
	}
	return (dest);
}
