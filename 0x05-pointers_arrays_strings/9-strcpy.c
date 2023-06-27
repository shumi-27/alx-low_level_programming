#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src to buffer(dest);
 * @dest : destination buffer
 * @src : source
 * Return:the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *retptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (retptr);
}
