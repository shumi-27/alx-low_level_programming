#include "main.h"
/**
 * *_strncat - concatenates two strings,  using at most n bytes from src.
 * @dest : destination string
 * @src :  source strng
 * @n : number of bytes
 * Return:  Concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *s1;

	s1 = dest;
	while (*s1 != '\0')
	{
		s1++;
	}
	while (*src && n > 1)
	{
		*s1 = *src;
		n--;
		s1++;
		src++;
	}
	*s1 = '\0';
	return (dest);
}
